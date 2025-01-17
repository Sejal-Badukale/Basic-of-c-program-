#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	char str1[20];
	printf("Enter string:");
	gets(str);
	printf("%s",str);
	strcpy(str1,str);
	printf("\nCopy String: %s",str1);
	}
