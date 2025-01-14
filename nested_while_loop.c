//nested  while loop example.
#include<stdio.h>
int main()
{
int i=1;
while(i<=3){
	int j=1;
	while(j<=i){
		printf("* ");
		j++;
	}
	printf("\n");
	i++;
}
}
