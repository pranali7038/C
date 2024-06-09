#include<graphics.h>
#include<conio.h>
#include<iostream.h>

static int LEFT=1,RIGHT=2,TOP=8,BOTTOM=4,xmin,ymin,xmax,ymax;
int getcode(int x,int y)
{
	int code=0;
	if(y>ymax)code|=TOP;
	if(y<ymin)code|=BOTTOM;
	if(x<xmin)code|=LEFT;
	if(x>xmax)code|=RIGHT;
	return code;
}
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setcolor(WHITE);

	cout<<"\nEnter windows minimum and maximun values:";
	cin>>xmin>>ymin>>xmax>>ymax;
	rectangle(xmin,ymin,xmax,ymax);

	int x1,y1,x2,y2;
	cout<<"\nEnter the endpoints of the line:";
	cin>>x1>>y1>>x2>>y2;
	line(x1,y1,x2,y2);
	getch();

	int outcode1=getcode(x1,y1),outcode2=getcode(x2,y2);
	int accept=0;

    while(1)
	{
		float xm=(x1+y1)/2 , ym=(y1+y2)/2;
		if(outcode1==0 && outcode2==0)
		{
			accept=1;
			break;
		}
		else if((outcode1 & outcode2)!=0)
		{
			break;
		}
		else{
			if(getcode(xm)& outcode1==0)
			{
				accept=1;
				break;
			}
			else{
				break;
			}
			
		}
	}
	cout<<"After Clipping:";
	if(accept){
		cleardevice();
		rectangle(xmin,ymin,xmax,ymax);
		setcolor(RED);
		line(x1,y1,x2,y2);

	getch();
    closegraph();
	}

}