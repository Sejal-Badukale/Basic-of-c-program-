//1 Print First N Natural Numbers using while loop
#include<stdio.h>
int main()
{
	int n;
	int i=1;
	printf("Enter n:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("Natural Number is= %d\n",i);
		i++;
	}
}
