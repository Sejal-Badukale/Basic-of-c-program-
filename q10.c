//10.Write a C program to check whether a character is uppercase or lowercase alphabet.
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter your choice:");
	scanf("%c",&ch);
	if(ch>='A'&& ch<='Z')
    {
		printf("Enter charachter is Uppercase");
	}
	else
	{
		printf("Enter charachter is Lowercase");
	}
	
}
