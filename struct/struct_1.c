#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>



void main(int *args,char *argv[])
{
	struct people {
		int age,height;
		char username[20];
		char userpasswd[20];
		char homeaddr[20];
	}z;


	z.age=18;
	z.height=180;
	char username[20]="lisen";
	strcpy(z.username,username);
	char userpasswd[20]="545123";
	strcpy(z.userpasswd,userpasswd);
	char homeaddr[20]="henanzhoukou";
	strcpy(z.homeaddr,homeaddr);

	printf("username :%s\n",z.username);
	printf("userpasswd :%s\n",z.userpasswd);
	printf("homeaddr :%s\n",z.homeaddr);
}

