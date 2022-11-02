#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#include<graphics.h>

int main()
{int gd=DETECT,gm;
initgraph(&gd,&gm,(char*)"");
	int cx,cy,r,x,y;
	printf("enter centre coordinates of circle");
	scanf("%d%d",&cx,&cy);
	printf("ENter radius");
	scanf("%d",&r);
	float m;
	x=0;
	y=r;
	m=(5/4)-r;
	
	while(x<=y)
	{
		if(m<0)
		{
			m=m+2*x+3;
		}
		else{
			m=m+2*(x-y)+5;
			y=y-1;
		}
		x=x+1;
		putpixel(x+cx,y+cy,2);
		putpixel(x+cx,-y+cy,2);
		putpixel(-x+cx,-y+cy,2);
		putpixel(-x+cx,y+cy,2);
		putpixel(y+cy,x+cx,2);
		putpixel(y+cy,-x+cx,2);
		putpixel(-y+cy,x+cx,2);
		putpixel(-y+cy,-x+cx,2);
	
	}
	getch();
	closegraph();
	
}

