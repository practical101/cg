#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void boundaryfill(int x,int y,int fillcolour,int boundarycolour){
int c;
c=getpixel(x,y);
if((c!=fillcolour)&&(c!=boundarycolour)){
putpixel(x,y,fillcolour);
boundaryfill(x,y,fillcolour,boundarycolour);
boundaryfill(x+1,y,fillcolour,boundarycolour);
boundaryfill(x-1,y,fillcolour,boundarycolour);
boundaryfill(x,y+1,fillcolour,boundarycolour);
boundaryfill(x,y-1,fillcolour,boundarycolour);
boundaryfill(x+1,y+1,fillcolour,boundarycolour);
boundaryfill(x+1,y-1,fillcolour,boundarycolour);
boundaryfill(x-1,y+1,fillcolour,boundarycolour);
boundaryfill(x-1,y-1,fillcolour,boundarycolour);
}
}
int main(){
int gd = DETECT, gm;
initgraph(&gd,&gm,(char*)"");
int x=200,y=250,fillcolour,boundarycolour;
rectangle(100,100,300,300);
boundaryfill(x,y,BLUE,WHITE);
getch();
closegraph();
}

