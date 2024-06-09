#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

void main()
{
    int gd=DETECT,gm,x,y,r;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	clrscr();
    
    cout<<"Enter starting coordinates of circle:";
    cin>>x,y;
    
    cout<<"Enter radius of circle:";
    cin>>r;
    
    bres(x,y,r);
    
    getch();
    closegraph();
}

void bres(int x,int y,int r)
{
    int x1,y1,dp;
    x1=x;
    y1=r;
    dp=3-2*r;
    
    while(x<=y)
    {
        if(dp<=0)
        {
            dp+=(4*x1)+6;
        }
        else{
            dp+=4*(x1-y1)+10;
            y--;
        }
        x++;
        display(x1,y1,x,y);
    }
}

void display(int x1,int y1,int x,int y)
{
    putpixel(x1+x,y1+y,WHITE);
    putpixel(x1+x,y-y1,WHITE);
    putpixel(x-x1,y1+y,WHITE);
    putpixel(x-x1,y-y1,WHITE);
    putpixel(x+y1,y+x1,WHITE);
    putpixel(x+y1,y-x1,WHITE);
    putpixel(x-y1,y+x1,WHITE);
    putpixel(x-y1,y-x1,WHITE);
}