#include<stdio.h>
int main()
{
	
	char frame[8];
	FILE *f1,*f2;
	while(1)
	{   f1=fopen("f1.txt","r");
		char ch=fgetc(f1);
		if(ch=='1')
		{ printf("ack no");}
		if(ch=='0')
		{ 
		  printf("ack rec");
		  scanf("%s",frame);
		  f2=fopen("f2.txt","w");
		  fprintf(f2,"%s",frame);
		  fclose(f2);
		  f1=fopen("f1.txt","w");
		  putc('1',f1);
		  fclose(f1);
		  sleep(1000);
		  printf("data sent");
		  sleep(1000);
	  }
  } 
	
	return 0;
}
