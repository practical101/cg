#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int gd=DETECT, gm, p1, q1, angle1, angle2, xr, yr;
initgraph(&gd, &gm,(char*)"");
printf("Enter the centre coordinate(p1, q1):");
scanf("%d%d", &p1, &q1);
printf("Enter the semi-major axis:");
scanf("%d", &xr);
printf("Enter the semi-minor axis:");
scanf("%d", &yr);
angle1=0;
angle2=360;
setcolor(BROWN);
ellipse(p1,q1,angle1,angle2,xr,yr);
getch();
closegraph();
}
