#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
void f_fill(int x,int y,int fill,int default_col);

void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	clrscr();

	rectangle(50,50,250,250);
	f_fill(55,55,10,0);

	getch();
	closegraph();
}
void f_fill(int x,int y,int fill,int default_col)
{
	int current;
	current=getpixel(x,y);
	if(current==default_col)
	{
		delay(5);
		putpixel(x,y,fill);
		
		f_fill(x+1,y,fill,default_col);
		f_fill(x-1,y,fill,default_col);
		f_fill(x,y+1,fill,default_col);
		f_fill(x,y-1,fill,default_col);
	}
}

