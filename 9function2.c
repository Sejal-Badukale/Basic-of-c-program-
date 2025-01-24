//9.write a c program to find sum of first n natural numbers using function (without argument with return).
#include<stdio.h>
int sum()
 {
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
	for (i=1;i<=n;i++)
	 {
        sum=sum+i;
     }
     return sum;
}
	int main()
	{   
		int result;
		result=sum();
		printf("Sum of the first  natural numbers is: %d",result);
	}

