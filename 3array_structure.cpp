//3.Create an array of structures to store information of 5 books (title, author, price) and display them.
#include<stdio.h>

struct Books{
	char title[30];
	char author[20];
	float price;
}s1[5];
int main()
{
	int i;
	for(i=0;i<5;i++)
	{
	printf("\nEnter Title:");
	scanf("%s",s1[i].title);
	printf("Enter Author:");
	scanf("%s",s1[i].author);
	printf("Enter price:");
	scanf("%f",&s1[i].price);	
	}
	printf("\nBooks Information:\n");
	for(i=0;i<5;i++)
	{
	printf("Book %d:\n", i + 1);
	printf("Title: %s\n", s1[i].title);
    printf("Author: %s\n", s1[i].author);
    printf("Price: %f\n", s1[i].price);	
	}
}

