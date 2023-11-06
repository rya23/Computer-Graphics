#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

void translate(float x[2], float y[2], int tx, int ty)
{
  int i;
  for (i = 0; i < 2; i++)

  {
    x[i] = x[i] + tx;
    y[i] = y[i] - ty;
  }
  rectangle(x[0], y[0], x[1], y[1]);
}

void scale(float x[2], float y[2], float sx, float sy)
{
  int i;
  for (i = 0; i < 2; i++)
  {
    x[i] = x[i] * sx;
    y[i] = y[i] * sy;
  }
  rectangle(x[0], y[0], x[1], y[1]);
}
void reflect(float x[2], float y[2], int axis)
{
  int i;
  for (i = 0; i < 2; i++)
  {
    if (axis == 0)
    {
      x[i] = getmaxx() - x[i];
    }
    else
    {
      y[i] = getmaxy() - y[i];
    }
  }
  rectangle(x[0], y[0], x[1], y[1]);
}

void shear(float x[2], float y[2], float shx, float shy)
{
  int i, x1, y1;
  for (i = 0; i < 2; i++)

  {
    x[i] = x[i] + x[i] * shx;
    y[i] = y[i] + y[i] * shy;
  }
  rectangle(x[0], y[0], x[1], y[1]);
}

void rotate(float x[], float y[], int angle)
{
  int i, X, Y;
  for (i = 0; i < 2; i++)
  {  X = x[i], Y = y[i];
  x[i] = X *cos(angle) - Y * sin(angle);
  y[i] = X * sin(angle) + Y * cos(angle);
  }
}

void main()
{
  float x[2], y[2], i, sx, sy, xc, yc, shx, shy;
  int tx, ty, axis,angle;
  int gm = DETECT, gd;
  initgraph(&gm, &gd, "C:\\TURBOC3\\BGI");
  // setbkcolor(2);

  xc = getmaxx() / 2;
  yc = getmaxy() / 2;

  line(0, yc, getmaxx(), yc);
  line(xc, 0, xc, getmaxy());

  printf("Enter Coordinates of Rectangle");
  for (i = 0; i < 2; i++)
  {

    scanf("%f%f", &x[i], &y[i]);
    x[i] = x[i] + xc;
    y[i] = yc - y[i];
  }
  rectangle(x[0], y[0], x[1], y[1]);
  // printf("Enter Translating parameters");
  // scanf("%d%d",&tx,&ty);
  // translate(x,y,tx,ty);
  // getch();

  // rectangle(x[0],y[0],x[1],y[1]);
  // printf("Enter Scaling Parameters");
  // scanf("%f%f",&sx,&sy);
  // scale(x,y,sx,sy);

  //  printf("Enter 1 to reflect X axis 0  to transalte Y axis");
  //  scanf("%d", &axis);
  //  reflect(x, y, axis);

//  printf("Enter Shearing values");
//  scanf("%f%f", &shx, &shy);
//  shear(x, y, shx, shy);

  printf("Enter angle");
  scanf("%d",&angle);
  rotate(x,y,angle);

  getch();
  closegraph();
}
