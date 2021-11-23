#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

struct book{
	int bookid,bookpage;
	char booktitle[20];
	char bookname[20];
};

void printBook(struct book book1);

void main(int *args,char *argv[])
{
	struct book book1;
	
	book1.bookid=1;
	book1.bookpage=300;
	strcpy(book1.booktitle,"this is java core  book !");
	strcpy(book1.bookname,"java prialm");
	printBook(book1);	
}
void printBook(struct book book1){
	printf("book id :%d\n",book1.bookid);
	printf("bookpage :%d\n",book1.bookpage);
	printf("booktitle : %s\n",book1.booktitle);
	printf("bookname : %s\n",book1.bookname);
}



