#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
void main(void)
{
	int i;
	printf("%10u%n\n",i,&i);
	printf("%d\n",i);
	printf("%.50u%n\n",i,&i);
	printf("%d\n",i);
	printf("%0100u%n\n",i,&i);
	printf("%d\n",i);
}

