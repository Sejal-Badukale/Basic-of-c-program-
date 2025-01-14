/*Q3.write a program in c to print 
AAAA
BBBB
CCCC
DDDD*/

#include<stdio.h>
int main(){
char i,j;
	for(i='A';i<='D';i++){
		for(j='A';j<='D';j++)
		{
			printf("%c",i);
		}
		printf("\n");
	}
}
