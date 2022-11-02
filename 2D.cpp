#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include<stdlib.h>
#include<process.h>
#include<conio.h>

void linedraw(int a[4][2]);
int array[4][2]={{10,20},{50,20},{50,60},{10,60}};

int out[4][2];
int main()
{
	int gdriver=DETECT,gmode,errorcode;
	int tx,ty,i,ch,sx,sy,shx,shy,c;
	float t;
	//clrscr();
	initgraph(&gdriver,&gmode,(char*)"");
	errorcode=graphresult();
	if(errorcode!=grOk)
	{
		printf("Graphic error=%s \n",grapherrormsg(errorcode));
		printf("Press any key to Halt");
		getch();
		exit(1);
	}
	line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
	line(getmaxx()/2,0,getmaxx()/2,getmaxy());
	linedraw(array);
	do
	{
	printf("\n1.Translation\n2.Rotation\n3.Scaling\n4.Reflection about X axis\n5.Relection about Y axis\n6.Reflection about Origin\n7.X-shear\n8.Y-shear\n9.Exit");
	printf("\nEnter Your choice: ");
	scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the value of tx and ty: ");
				scanf("%d%d",&tx,&ty);
				for(i=0;i<4;i++)
				{
					out[i][0]=array[i][0]+tx;
					out[i][1]=array[i][1]+ty;
				}
				linedraw(out);
				break;

			case 2:
			do
			{
				printf("\n1.Anticlockwise \n2.Clockwise \n3.Exit");
				printf("\nEnter your choice:");
				scanf("%d",&c);

				switch(c)
				{
					case 1:
					printf("\nEnter the value of theta: ");
					scanf("%f",&t);
					t=(3.14/180)*t;
					for(i=0;i<4;i++)
					{
						out[i][0]=((array[i][0])*cos(t))-((array[i][1])*sin(t));
						out[i][1]=((array[i][1])*cos(t))+((array[i][0])*sin(t));
					}
					linedraw(out);
					break;

					case 2:
					printf("\nEnter the value of theta: ");
					scanf("%f",&t);
					t=(3.14/180)*t;
					for(i=0;i<4;i++)
					{
						out[i][0]=((array[i][0])*cos(t))+((array[i][1])*sin(t));
						out[i][1]=((array[i][1])*cos(t))-((array[i][0])*sin(t));
					}
					linedraw(out);
					break;

					case 3:
					break;
				}

			}while(c<3);
			break;

			case 3:
			printf("Enter the value of sx and sy: ");
			scanf("%d%d",&sx,&sy);
			for(i=0;i<4;i++)
			{
				out[i][0]=array[i][0]*sx;
				out[i][1]=array[i][1]*sy;
			}
			linedraw(out);
			break;

			case 4:
			for(i=0;i<4;i++)
			{
				out[i][0]=array[i][0];
				out[i][1]=-(array[i][1]);
			}
			linedraw(out);
			break;

			case 5:
			for(i=0;i<4;i++)
			{
				out[i][0]=-(array[i][0]);
				out[i][1]=array[i][1];
			}
			linedraw(out);
			break;

			case 6:
			for(i=0;i<4;i++)
			{
				out[i][0]=-(array[i][0]);
				out[i][1]=-(array[i][1]);
			}
			linedraw(out);
			break;

			case 7:
			printf("Enter the value of SHX:");
			scanf("%d",&shx);
			for(i=0;i<4;i++)
			{
				out[i][0]=(array[i][0])+(shx*(array[i][1]));
				out[i][1]=(array[i][1]);
			}
			linedraw(out);
			break;

			case 8:
			printf("Enter the value of SHY:");
			scanf("%d",&shy);
			for(i=0;i<4;i++)
			{
				out[i][0]=(array[i][0]);
				out[i][1]=(array[i][1])+(shy*(array[i][0]));
			}
			linedraw(out);
			break;

			case 9:
			break;
		}
	}while(ch<9);
	exit(0);
	getch();
}
void linedraw(int a[4][2])
{
	line(getmaxx()/2+a[0][0],getmaxy()/2-a[0][1],getmaxx()/2+a[1][0],getmaxy()/2-a[1][1]);
	line(getmaxx()/2+a[1][0],getmaxy()/2-a[1][1],getmaxx()/2+a[2][0],getmaxy()/2-a[2][1]);
	line(getmaxx()/2+a[2][0],getmaxy()/2-a[2][1],getmaxx()/2+a[3][0],getmaxy()/2-a[3][1]);
	line(getmaxx()/2+a[3][0],getmaxy()/2-a[3][1],getmaxx()/2+a[0][0],getmaxy()/2-a[0][1]);
}
