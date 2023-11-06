#include<stdio.h>
#include<conio.h>
#include<graphics.h>


void bfill(int x ,int y,int newcolor,int bcolor)
{
      if(getpixel(x,y)!= bcolor && getpixel(x,y) != newcolor)
      {

	putpixel(x,y,newcolor);
	delay(1);
       bfill(x-1,y,newcolor,bcolor);
       bfill(x+1,y,newcolor,bcolor);
       bfill(x,y-1,newcolor,bcolor);
       bfill(x,y+1,newcolor,bcolor);

	bfill(x+1,y+1,newcolor,bcolor);
	 bfill(x-1,y-1,newcolor,bcolor);
	 bfill(x-1,y+1,newcolor,bcolor);
	bfill(x+1,y-1,newcolor,bcolor);
      }

}




void floodfil(int x ,int y,int newcolor,int oldcolor)
{
      if(getpixel(x,y)== oldcolor)
      {

	putpixel(x,y,newcolor);
	delay(1);
       floodfil(x-1,y,newcolor,oldcolor);
       floodfil(x+1,y,newcolor,oldcolor);
       floodfil(x,y-1,newcolor,oldcolor);
       floodfil(x,y+1,newcolor,oldcolor);

	floodfil(x+1,y+1,newcolor,oldcolor);
	 floodfil(x-1,y-1,newcolor,oldcolor);
	 floodfil(x-1,y+1,newcolor,oldcolor);
	floodfil(x+1,y-1,newcolor,oldcolor);
      }

}



void main()
{       int x,y,newcolor;
//	void floodfill(int x,int y,int color);
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	//setbkcolor(0);
	rectangle(100,100,150,150);
	bfill(120,123,12,15);
	rectangle(300,300,350,350);
	floodfil(320,323,12,0);
	getch();
}