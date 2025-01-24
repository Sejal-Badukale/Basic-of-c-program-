//9.write a c program to find sum of first n natural numbers using function (with argument without return).
#include<stdio.h>
void sum(n)
 {
    int i, sum = 0;
	for (i=1;i<=n;i++)
	 {
        sum=sum+i;
     }
	 printf("Sum of the first %d natural numbers is: %d", n, sum);
}
	int main()
	{
		int a;
		printf("Enter a number: ");
    	scanf("%d",&a);
		sum(a);
	}

