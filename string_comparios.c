//check whether two string as equal or not.
#include<stdio.h>
int main()
{
	char str1[20],str2[20];
	int i,j,flag=1;
	
	printf("Enter string 1:");
	gets(str1);
	printf("Enter string 2:");
	gets(str2);
	for(i=0;str1[i]!='\0' || str2[i]!='\0';i++)
	{
	if(str1!=str2)
	{
		flag=0;
		break;
	}
	}
	if(flag==1)
	{	
	printf("string is compare");
	}
	else
	{
	printf("string is not compare");	
	}
}
