#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

void main()
{
	int gd=DETECT,gm;
	int x1,y1,x2,y2;

	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	clrscr();
	cout<<"\nDDA Line Generating Algorithm";
	cout<<"\nEnter starting coordinates";
	cin>>x1>>y1;

	cout<<"\nEnter ending coordinates";
	cin>>x2>>y2;

	int i,dx,dy,steps,x,y;
	float xn,yn;
	
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	
	
	if(dx>dy)
	{
		steps=dx;
	}
	else{
		steps=dy;
	}
	xn=dx/steps;
	yn=dy/steps;
	
	x=x1;
	y=y1;
	putpixel(x,y,RED);

	for(i=1;i<=steps;i++){
		x=x+xn;
		y=y+yn;

		x1=x+0.5;
		y1=y+0.5;
		putpixel(x1,y1,RED);
	}
	getch();
	closegraph();
}

