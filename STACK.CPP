#include<iostream>
using namespace std;
class complex
{
    private:
    float r;
    float i;
    
    public:
    complex()
    {
        r=0.0;
        i=0.0;
    }
    complex operator+(complex);
    complex operator*(complex);
    friend istream &operator >>(istream &in,complex &c)
    {
        cout<<"\nEnter real part:";
        in>>c.r;
        cout<<"\nEnter imaginary part:";
        in>>c.i;
    }
    friend ostream &operator <<(istream &out,complex &c)
    {
        out<<c.r<<"+"<<c.i<<"i \n";
    }
    
};

complex complex::operator+(complex c)
{
    complex temp;
    temp.r=r+c.r;
    temp.i=i+c.i;
    return(temp);
}
complex complex::operator*(complex c)
{
    complex temp2;
    temp2.r=(r*c.r)-(i*c.i);
    temp2.i=(i*c.r)+(r*c.i);
    return(temp2);
}
int main()
{
    complex c1,c2,c3,c4;
    cout<<"\nDefault contructor values:";
    cout<<c1;
    cout<<"\nEnter the first number:";
    cin>>c1;
    cout<<"\nEnter second number:";
    cin>>c2;
    
    c3=c1+c2;
    c4=c1*c2;
    
    cout<<"\nAddition of two numbers is:";
    cout<<c3;
    
    cout<<"\nMultiplication of two numbers is:";
    cout<<c4;

 return(0);    
}