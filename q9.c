//9.Write a C program to input any character and check whether it is alphabet, digit or special character.
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter your choice:");
	scanf("%c",&ch);
	if(ch>='A'&& ch<='Z' || ch>='a'&& ch<='z')
	{
		printf("Enter charachter is alphabet");
	}
	else if(ch>='0' && ch<='9')
	{
	printf("Enter charachter is digit");	
	}
	else
	{
		printf("Enter charachter is special charachter");
	}
	
}
