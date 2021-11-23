#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int add(int a,int b);

void main(void)
{
	int a=10;
	int b=20;
	int result=0;
	result = add(a,b);
	printf("result value :%d \n",result);
		
}

int add(int a,int b)
{
	int c =0;
	c=a+b;
	return c;
}
