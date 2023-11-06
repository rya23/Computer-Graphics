
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{   	int x1,y1,x2,y2,dx,dy,steps,i;
	float m;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setbkcolor(0);
	x1=100,x2=300,y1=200,y2=300;
	dx=x2-x1;
	dy=y2-y1;
	m=2*dy-dx;
//	if(dx>dy) steps=dx;
	//else steps=dy;
	while(x1<x2)
	{
	 //    putpixel(x1,y1,15);
	if(m>=0)
	{       y1=y1+1;
		x1=x1+1;
		m=m+(2*dy)-(2*dx);

	}
	else
	{       x1=x1+1;
		m=m+2*dy;
	}

	 putpixel(x1,y1,(15));
	 delay(5);
	}
	getch();


}