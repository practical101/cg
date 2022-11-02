#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdio.h>

/****MAIN FUNCTION*****/
int main()
{
int x1,x2,y1,y2,e,x,y,s1,s2,dx,dy,a,xic,yic;
int interchang,i;
int gdriver=DETECT,gmode,errorcode;
initgraph(&gdriver,&gmode,"c:/tc/bgi");
errorcode=graphresult();
if(errorcode!=grOk)
{
printf("GraphicsError:%s\n",grapherrormsg(errorcode));
printf("Press Any Key To Halt");

getch();
exit(1);
}
printf("Enter the value of x1 and y1:");
scanf("%d%d",&x1,&y1);
printf("Enter the value of x2 and y2:");
scanf("%d%d",&x2,&y2);
dx=abs(x2-x1);
dy=abs(y2-y1);
e=(2*dy)-dx;
x=x1;
y=y1;
for(i=0;i<=dx;i++)
{ delay(500);
putpixel(x,y,10);
while(e>=0)
{
y=y+1;
e=e-(2*dx);
}
x=x+1;
e=e+(2*dy);
}
getch();
}

