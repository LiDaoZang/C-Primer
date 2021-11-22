#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(void)
{
	char fred[0x20];
	int bob;
	float jimmy;
	double tom;
	read(0,fred,0x20);	
	write(1,fred,0x20);
}

