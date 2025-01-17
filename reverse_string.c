//reverse a string without using funtion.
#include<stdio.h>
int main()
{
	char str[20];
	int len=0,i;
	printf("Enter string:");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		len=len+1;
	}
	for(i=len-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
}
