#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

void main(){
	int gd=DETECT,gm;
	int x1,y1,x2,y2,dx,dy,i,p,m;

	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	clrscr();
	cout<<"\n*******DDA Line Generating Algorithm********";
	cout<<"\nEnter starting coordinates:";
	cin>>x1>>y1;

	cout<<"\nEnter ending coordinates:";
	cin>>x2>>y2;

	dx=abs(x2-x1);
	dy=abs(y2-y1);
	p=2*dy-dx;
	m=dy/dx;

	putpixel(x1,y1,3);
	for(i=0;i<dx;i++)
	{	if(m<1)
		{
			if(p<0)
			{
				x1++;
				p=p*2*dy;
			}
			else{
				x1++;
				y1++;
				p=p+2*dy-2*dx;
			}
			putpixel(x1,y1,YELLOW);
		}
		else
		{ 
			if(p<0)
			{
				y1++;
				p=p*2*dy;
			}
			else{
				x1++;
				y1++;
				p=p+2*dy-2*dx;
			}
			putpixel(x1,y1,YELLOW);
			
		}
	}
	getch();
	closegraph();
}