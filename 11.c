#include<stdio.h>
int main()
{
	float w1,w2,purchase,average;
	printf("Enter Weight of first item=");
	scanf("%f",&w1);
	printf("Enter Weight of second item=");
	scanf("%f",&w2);
	printf("Enter number of purchase item=");
	scanf("%f",&purchase);
	average=(w1+w2)/purchase;
	printf("Average value of item is %f",average);
	}
