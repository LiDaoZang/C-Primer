#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


char c[20];
void scanf_f(int *a)
{
	if(a>1)
	{
		return ;
	}
	read(0,&c,0x20);
}

void main(int *args,char *argv[])
{
	int *d = args;
	scanf_f(d);
	printf("c value : %s\n",c);
}

