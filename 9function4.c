//9.write a c program to find sum of first n natural numbers using function (with argument with return).
#include<stdio.h>
int sum(int n)
 {
    int i, sum = 0;
	for (i=1;i<=n;i++)
	 {
        sum=sum+i;
     }
	 return sum;
	
}
	int main()
	{
		int a;
		printf("Enter a number: ");
    	scanf("%d",&a);
		int result=sum(a);
		printf("Sum of the first %d natural numbers is: %d", a,result);
		
	}

