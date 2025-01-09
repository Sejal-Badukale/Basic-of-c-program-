//7.Write a C program to check whether a character is alphabet or not.
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter an alphabet=");
	scanf("%c",&ch);
	if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
	{
		printf("It is an alphabet");
	}
	else
	{
		printf("It is not an alphabet");
	}
}
