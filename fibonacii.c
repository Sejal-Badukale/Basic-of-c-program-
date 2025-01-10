//4.print Fibonacci series up to n terms.
#include<stdio.h>
int main()
{
	int t,n1=0,n2=1,n,i;
	printf("Enter n=");
	scanf("%d",&n);
	prinf("Fibonacci:");
	printf("%d %d ",n1,n2);
	for(i=3;i<=n;i++)
	{
		t=n1+n2;
		printf("%d ",t);
		n1=n2;
		n2=t;
	}
}
