#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void print_time(int hour,int minute)
{
	printf("%d:%d\n",hour,minute);
}

void main(void)
{
	print_time(23,59);
}

