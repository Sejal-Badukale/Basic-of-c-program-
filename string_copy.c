//string copy without using function.
#include<stdio.h>
int main()
{
	char str[20],str2[20];
	int i;
	printf("Enter string:");
	gets(str);
	printf("original string:%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		str2[i]=str[i];
	}
	printf("\ncopy string:%s",str2);
}
