//3.write a c program to count the number of vowels and consonant in a string using pointers.   
#include<stdio.h>
int main()
{
	int i,vowels=0,consonant=0;
	char str[50];
	char *ch=str;
	printf("Enter string=");
	gets(str);
	printf("%s",str);
	for(i=0;ch[i]!='\0';)
	{
		if(ch[i]=='a' || ch[i]=='e'|| ch[i]=='i'|| ch[i]=='o'|| ch[i]=='u' || ch[i]=='A'|| ch[i]=='E'|| ch[i]=='I'||
		 ch[i]=='O' || ch[i]=='U')
		{
			 vowels++;
		}
		else
		{
		 consonant++;
		
		}
		i++;
	}
	printf("\n%d \n%d",vowels,consonant);
}
