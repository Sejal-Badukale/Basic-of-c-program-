//9.write a c program to find sum of first n natural numbers using function (without argument without return).
#include<stdio.h>
void sum()
 {
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
	for (i=1;i<=n;i++)
	 {
        sum=sum+i;
     }

    printf("Sum of the first %d natural numbers is: %d", n, sum);
}
	int main()
	{
		sum();
	}

