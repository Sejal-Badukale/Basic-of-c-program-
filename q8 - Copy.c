//8.Write a C program to input any alphabet and check whether it is vowel or consonant.
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter an alphabet=");
	scanf("%c",&ch);
	if(ch =='A'|| ch=='E' || ch=='I'|| ch=='O'|| ch=='U' && ch =='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
	{
		printf("alphabet is vowel");
	}
	else
	{
		printf("alphabet is a consonant");
	}
} 
