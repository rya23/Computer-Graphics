#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{
	float x,y,x1,y1,dx,xy,r,d;
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setbkcolor(0);
	r=100;
	d=1-r;
	x1=200,y1=200;
	x=0,y=r;
//	putpixel(x1,y1-r,15);
//	putpixel(x1,y1+r,15);
	//putpixel(x1+r,y1,15);
//	putpixel(x1-r,y1,15);
	while(x<=y)
	{
		if(d<0)
		{
		   x=x+1;
		   y=y;
		   d=d+(2*x)+1;
		}
		else
		{	x=x+1;
			y=y-1;
			d=d-(2*y)+(2*x)+1;
		}

		putpixel(x1+x,y1+y,1);
		putpixel(x1-x,y1+y,2);
		putpixel(x1+x,y1-y,3);
		putpixel(x1-x,y1-y,4);
		putpixel(y1+y,x1+x,5);
		putpixel(y1-y,x1+x,6);
		putpixel(y1+y,x1-x,7);
		putpixel(y1-y,x1-x,8);

	}



getch();
clrscr();
closegraph();
}
