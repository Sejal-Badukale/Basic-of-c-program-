// 5.Calculate the length of the string.     
#include<stdio.h>
int main()
{
	int i,len;
	char str[50];
	char *ch=str;
	printf("Enter string=");
	gets(str);
	printf("string is:%s",str);
	while(*ch!='\0')
	{
		len=len+1;
		ch++;
	}
	printf("\nLenth of string is:%d",len);
}
