#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>

void main()
{
  int x[4], y[4], i;
  double t, x1, y1;
  int gd = DETECT, gm;
  initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
  setbkcolor(3);
  printf("Enter 4 points");
  for (i = 0; i < 4; i++)
  {
    scanf("%d%d", &x[i],&y[i]);
    putpixel(x[i],y[i],15);

  }
  setbkcolor(x[0]%5);

  for (t = 0.00; t <= 1.00; t = t + 0.001)
  {
   x1 = (pow(1 - t, 3) * x[0]) + (3 * t * pow(1 - t, 2) * x[1]) + (3 * t * t*(1 - t) * x[2]) +(t * t * t * x[3]);
    y1 = pow(1 - t, 3) * y[0] + 3 * t * pow(1 - t, 2) * y[1] + 3 * t * t*(1 - t) * y[2] + t * t * t * y[3];

    putpixel(x1, y1, 15);
    delay(1);
}
//    for (t = 0.0; t <= 1.0; t = t + 0.001)
//    {      x1 = pow(1 - t, 3) * x[0] + 3 * t * pow(1 - t, 2) * x[1] + 3 * t * t * (1 - t) * pow(t, 3) * x[3];
//      y1 = pow(1 - t, 3) * y[0] + 3 * t * pow(1 - t, 2) * y[1] + 3 * t * t * (1 - t) * y[2] +pow(t, 3) * y[3];
//      putpixel(x1, y1, 15);
//    }


  getch();
}