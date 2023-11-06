#include<graphics.h>
#include<stdio.h>
#include<conio.h>

void main()

{

int gd = DETECT,gm, i;
float x, y,dx,dy,steps;

int x0, x1, y0, yl;

initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

setbkcolor(WHITE);
x0 = 200, y0=200, x1 = 300, yl = 240;

dx = (float)(x1 - x0); dy= (float)(yl - y0);

if(dx>=dy) {

steps = dx;

} else

{ steps = dy;

} dx = dx/steps;

dy=dy/steps;

x = x0;

y=y0; i=1;

while(i<= steps)

{

putpixel(x, y, RED);
 delay (10);

x += dx;
y += dy;
i=i+1;

}

getch(); closegraph();

}