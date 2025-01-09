//16.Write a C program to calculate profit or loss.
#include<stdio.h>
int main()
{
	int selling_price, cost_price, profit, loss;
	printf("Enter Selling price:");
	scanf("%d",&selling_price);
	printf("Enter Cost price:");
	scanf("%d",&cost_price);
	if(selling_price>cost_price)
	{
	profit=selling_price+cost_price;
	printf("profit is: %d",profit);
    }
    else
    {
	loss=selling_price-cost_price;
	printf("loss is: %d",loss);
    }
	
	
}
