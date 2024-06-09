#include<iostream>
#include<fstream>
#include<conio.h>
#include<dos.h>

class student
{
  private:
  string name;
  int rollno;
  
  public:
   void add_info()
   {
       fstream f;   //object of file strea, class
       f.open("C:\Users\Pranali\Desktop\oops lab\file.txt",ios::app);
       if(!f)
       {
           cout<<"File creation failed............";
       }
       else
       {
           //file open successfully in append mode
           cout<<"\nEnter name:";
           cin>>name;
        
           cout<<"\nEnter rollno:";
           cin>>rollno;
           
           //appending data to file
           f<<name<<" "<<;
           f<<rollno<<"\n"<<;
           f.close();
       }
   }
   
   
   void display_info()
   {
        fstream f;
        f.open("C:\Users\Pranali\Desktop\oops lab\file.txt",ios::in);
        if(!f) //checking file is exist or not
        {
            cout<<"\nNo such file found..";
        }
        else
        {
            while(!f.eof)
            {
                f>>name;
                f>>rollno;
                   cout<<name<<" ";
                   cout<<rollno<<" ";
                   cout<<"\n";
            }
            fs.close();
        }
   }
    
};
int main()
{
    int ch;
    student s;
    fstream f;   //creating object of fstream class
    
    do{
        cout<<"\n* * * MENU * * *";
        cout<<"\n1.Add Information";
        cout<<"\n2.Display Information";
        cout<<"\n3.Exit";
        
        cout<<"\nEnter your choice:";
        cin>>ch;
        
        switch(ch)
        {
            case 1:
            s.add_info();
            break;
            
            case 2:
            s.display_info();
            break;
            
            case 3:
            exit(0);
        }
        
    }while(ch!=3);
    
    return(0);
}