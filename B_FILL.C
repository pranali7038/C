#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
void b_fill(int x,int y,int fill,int boundary);

void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	clrscr();
	
	setcolor(10);
	rectangle(250,200,310,260);
	b_fill(280,250,12,10);
	
	getch();
	closegraph();
}
void b_fill(int x,int y,int fill,int boundary)
{
	int current;
	current=getpixel(x,y);
	if((current!=boundary)&&(current!=fill))
	{
		setcolor(fill);
		putpixel(x,y,fill);
		delay(5);
		b_fill(x+1,y,fill,boundary);
		b_fill(x-1,y,fill,boundary);
		b_fill(x,y+1,fill,boundary);
		b_fill(x,y-1,fill,boundary);
	}
}

