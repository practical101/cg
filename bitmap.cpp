#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<math.h>
#include<graphics.h>

struct header
{
  int signature;
  long size;
  int resv1,resv2;
  long offset,BITMAP,width,height;
  int planes,bits;
  long compress,size_image,hres,vres,nocolour,impcolour;
} head;

  int main()
  {
	int i;
	FILE *fp;
	fp=fopen("c:\\TC\\untitled.bmp","rb+");   

// r+ for read and write,b for binary //
	
       //clrscr();
	if(fp==NULL)
	{ printf("\n cannot open the file");
	  getch();
	  exit(0);
	}
	fread(&head,sizeof(head),1,fp);
	printf("\n attributes of image saved");
	printf("\n size of file in bytes=%d",head.size);
	printf("\n width=%d",head.width);
	printf("\n height=%d",head.height);
	printf("\n no of planes=%d",head.planes);
	printf("\n no of bits=%d",head.bits);
	printf("\n compression type=%d",head.compress);
	printf("\n size of image=%d",head.size_image);

	getch();
	}

