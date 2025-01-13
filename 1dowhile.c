////1 Print First N Natural Numbers using do while loop
#include<stdio.h>
int main()
{
	int n;
	int i=1;
	printf("Enter n:");
	scanf("%d",&n);
	do{
		printf("Natural Number is= %d\n",i);
		i++;
	}while(i<=n);
}
