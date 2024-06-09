#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<iostream.h>
#include<dos.h>

int main()
{
	int x,y,r,p,x1,y1,gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	clrscr();
	cout<<"\nEnter center coordinates of circle:";
	cin>>x>>y;
	cout<<"\nEnter radius of circle:";
	cin>>r;
	 p=1-r;
	 x1=0;
	 y1=r;
	 putpixel(x1,y1,WHITE);
	while(x<=y)
	{
		if(p>=0)
		{
		 x=x+1;
		 y=y-1;
		 p=p+2*(x-y)+1;
		}
		else
		{
		 x=x+1;
		 p=p+(2*x)+1;
		}

		putpixel(x1+x,y1+y,RED);
		putpixel(x1+x,y-y1,WHITE);
		putpixel(x-x1,y-y1,RED);
		putpixel(x+y1,y+x1,RED);
		putpixel(x+y1,y-x1,RED);
		putpixel(x-y1,y+x1,RED);
		putpixel(x-y1,y-x1,RED);
	}


	getch();
	return 0;
}