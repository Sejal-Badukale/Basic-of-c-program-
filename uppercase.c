//program to convert uppercase to lowercase without usingfunction.
#include<stdio.h>
int main()
{
	char str[20];
	int i;
	printf("Enter string:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
	if(str[i]>='a' && str[i]<='z')
	{
		str[i]=str[i]-32;
	}
	}
	printf("\nstring :%s",str);
}
