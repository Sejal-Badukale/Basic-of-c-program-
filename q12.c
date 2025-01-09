//12.Write a C program to input month number and print number of days in that month.
#include<stdio.h>
int main()
{
	int choice;
	printf("Enter month number:");
	scanf("%d", &choice);
	switch(choice)
	{
	case 1:
		printf("31 days in January");
		break;
	case 2:
		printf("28 days in February");
		break;
	case 3:
		printf("31 days in March");
		break;
	case 4:
		printf("30 days in April");
		break;	
	case 5:
		printf("31 days in May");
		break;	
	case 6:
		printf("30 days in June");
		break;	
	case 7:
		printf("31 days in July");
		break;	
	case 8:
		printf("31 days in August");
		break;	
	case 9:
		printf("30 days in September");
		break;	
	case 10:
		printf("31 days in October");
		break;
	case 11:
		printf("30 days in November");
		break;	
	case 12:
		printf("31 days in December");
		break;	
	default:
		printf("Invalid month number");
		break;
		
	}
}
