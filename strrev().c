#include<stdio.h>
int main()
{
	char str[20];
	int result;
	printf("Enter string:");
	gets(str);
	result=strrev(str);
	printf("Revese of string :%s",str);
}
