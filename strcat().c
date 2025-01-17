#include<stdio.h>
int main()
{
	char str1[20];
    char str2[20];
	printf("Enter string 1:");
	gets(str1);
	printf("Enter string 2:");
	gets(str2);
	printf(strcat(str1,str2));

	
}
