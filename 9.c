//write a program in c to convert specified days into years,weeks,days.
#include<stdio.h>
int main()
{
int num_of_days,years,weeks,days;
printf("Enter Number of Days: ");
scanf("%d",&num_of_days);
years=num_of_days/365;
weeks=(num_of_days/7;
days=(num_of_days%365)%7;
printf("\nYear= %d",years);
printf("\nweeks= %d",weeks);
printf("\ndays= %d",days);	
}
