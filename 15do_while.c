//15.C program to print alphabet from  a to z using do while loop.
#include<stdio.h>
int main()
{
	char ch='a';
	do
	{
		printf("%c ",ch);
		ch++;
	}while(ch<='z');
}
