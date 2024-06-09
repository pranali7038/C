#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main()
{
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	clrscr();
	
	printf("\nBoundary fill algorithm:")
	rectangle(100,100,50,50);
	b_fill(55,55,50,50);
	getch();
	closegraph();
	return 0;
}
void b_fill(int x,int y,int f_color,int b_color)
{
	if(getpixel(x,y)!=b_color && getpixel(x,y)!=f_color)
	{
		putpixel(x,y,f_color);
		b_fill(x+1,y,f_color,b_color);
		b_fill(x,y+1,f_color,b_color);
		b_fill(x-1,y,f_color,b_color);
		b_fill(x,y-1,f_color,b_color);
	}
}