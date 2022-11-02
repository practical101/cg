#include<stdio.h>
#include<graphics.h>
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,(char*)"");
circle(300,100,50);
circle(360,100,10);
circle(240,100,10);
circle(280,100,4);
circle(320,100,4);
line(300,105,300,115);
line(300,115,305,115);
line(280,145,280,170);
line(320,145,320,170);
rectangle(240,170,360,300);
line(240,200,200,240);
line(360,200,400,240);
line(270,300,270,350);
line(330,300,330,350);
line(270,350,250,360);
line(330,350,350,360);
getch();
closegraph();
}

