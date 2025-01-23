//3.write a c program to count the number of vowels and consonant in a string using pointers.   
#include<stdio.h>
int main()
{
	int i,vowels=0,consonant=0;
	char str[50];
	char *ch=&str;
	printf("Enter string=");
	gets(str);
	printf("%s",str);
	while(*ch!='\0')
	{
			if(*ch=='a' || *ch=='e'|| *ch=='i'|| *ch=='o'|| *ch=='u' || *ch=='A'|| *ch=='E'|| *ch=='I'|| *ch=='O' || *ch=='U')
			{
				vowels++;
			}
			else
			{
				consonant++;
			}
			ch++;
	}
		printf("\n%d %d",vowels,consonant);
}
	
