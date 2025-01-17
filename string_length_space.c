#include<stdio.h>
int main()
{
	char str[20];
	int len=0,i;
	printf("Enter string:");
	gets(str);
	printf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		len=len+1;
	}
	printf("\nstring length:%d",len);
}
