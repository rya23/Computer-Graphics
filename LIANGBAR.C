#include<stdio.h>
#include<conio.h>
#include<graphics.h>


void clip(int x1,int y1,int x2,int y2,int xmin,int ymin,int xmax,int ymax)
{    float dx, dy,i;
	int xx1,xx2,yy1,yy2;
	float temp, t1,t2,p[4],q[4];
	t1=0,t2=1;
     dx=x2-x1;
     dy=y2-y1;
     rectangle(xmin,ymin,xmax,ymax);
     p[0]=-dx;
     p[1]=dx;
     p[2]=-dy;
     p[3]=dy;
     q[0]=x1-xmin;
     q[1]=xmax-x1;
     q[2]=y1-ymin;
     q[3]=ymax-y1;

     for(i=0;i<4;i++)
     {
      temp=q[i]/p[i];
      if(p[i]<0)
      {
	 if(t1<=temp)
	 {
	 t1=temp;
	  }
      }
      else
      {
	 if(t2>temp)
	 {
	 t2=temp;
	  }
      }

     }

    if(t1<t2)
     {
     xx1=x1+t1*dx;
     yy1=y1+t1*dy;
     xx2=x1+t2*dx;
     yy2=y1+t2*dy;
     line(xx1,yy1,xx2,yy2);
     }


}



void main()

{
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setbkcolor(0);
	rectangle(150,150,300,300);
	line(200,100,400,350);
	getch();
	cleardevice();
	clip(200,100,400,350,150,150,300,300);
	getch();


}