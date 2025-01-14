/*Q7.write a program in c to print 
EDCBA
EDCBA
EDCBA
EDCBA*/

#include<stdio.h>
int main()
{
	char i,j;
	for(i='D';i>='A';i--)
	{
		for(j='E';j>='A';j--)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}
