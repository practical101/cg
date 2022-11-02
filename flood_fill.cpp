#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
void flood(int x, int y,int color1, int color2){
int c;
c=getpixel(x,y);
if(c==0){
putpixel( x,y,color1);
flood(x+1,y,color1,color2);
flood(x-1,y,color1,color2);
flood(x,y+1,color1,color2);
flood(x,y-1,color1,color2);
}
}
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,(char*)"");
int x, y,r,color1,color2;
x=200;
y=250;
r=100;
circle(x,y,r);
color1=10;
color2=0;
flood(x,y,color1,color2);
getch();
closegraph();
}

