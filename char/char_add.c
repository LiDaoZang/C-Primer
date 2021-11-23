#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(char *args,char *argv[])
{
	if(args>=2)
	{	
		printf("char value = '%c'\n",*argv[1]);
		printf("number value= '%d'\n",*argv[1]);
	}else
	{
		printf("No Input Value!\n");
	}

}

