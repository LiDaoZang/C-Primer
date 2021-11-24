#include<stdio.h>

void main()
{
	char format[128];
	int arg1  =1;
	int arg2 = 0x8888888;
	int arg3 = -1;
	char arg4[10]="abcd";
	scanf("%s",format);
	printf(format,arg1,arg2,arg3,arg4);
	printf("\n");

}
