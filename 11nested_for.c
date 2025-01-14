/*Q11.write a program in c to print 
A
AB
ABC
ABCD
*/


#include<stdio.h>
int main()
{
	char i,j;
		for(i='A';i<='D';i++)
	{
		for(j='A';j<=i;j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}
