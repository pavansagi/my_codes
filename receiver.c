#include<stdio.h>
#include<malloc.h>
int main()
{
	
	char *frame=(char*)malloc(9);
	FILE *f1,*f2;
	while(1)
	{   f1=fopen("f1.txt","r");
		char ch=fgetc(f1);
		if(ch=='1')
		{ 
		  f2=fopen("f2.txt","r");
		  fscanf(f2,"%s",frame);
		  fclose(f2);
		  f1=fopen("f1.txt","w");
		  fputc('0',f1);
		  printf("data rec");
		  sleep(1000);
		  printf("ack sent");
	  }
	  fclose(f1);
  } 
	
	return 0;
}
