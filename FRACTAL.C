#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>


void koch(int x1,int y1,int x2,int y2,int iter)

{

float angle = (60*3.142)/180;
int x3=(2*x1+x2)/3;
int y3=(2*y1+y2)/3;
int x4=(x1+2*x2)/3;
int y4=(y1+2*y2)/3;

int x= x3 + (x4-x3)*cos(angle)+(y4-y3)*sin(angle);
int y = y3 - (x4-x3)*sin(angle)+(y4-y3)*cos(angle);


if(iter>0)
{
koch(x1,y1,x3,y3,iter-1);
koch(x3,y3,x,y,iter-1);
koch(x,y,x4,y4,iter-1);
koch(x4,y4,x2,y2,iter-1);
}
else
{
line(x1,y1,x3,y3);
line(x3,y3,x,y);
line(x,y,x4,y4);
line(x4,y4,x2,y2);


}

}



void main()
{
	int x1,x2,y1,y2;

 int gd = DETECT,gm;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 x1=0;x2=600,y1=300,y2=300;
 setbkcolor(2);
 koch(x1,y1,x2,y2,4);
// line(x1,y1,x2,y2);
 getch();
 cleardevice();

}