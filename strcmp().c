//using strcmp() function
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20];
	char str2[20];
	int result;
	printf("Enter string1:");
	gets(str1);
	printf("Enter string2:");
	gets(str2);
	result=strcmp(str1,str2);
	if(result==0)
	{
		printf("String is equal");
	}
	else
	{
	printf("String is not equal");	
	}
}
