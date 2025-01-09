#include<stdio.h>
int main(){
	int emp_id;
	float hour_per_month,amount_per_month,salary;
	printf("Enter Employee ID=");
	scanf("%d",&emp_id);
	printf("Enter hour per month=");
	scanf("%f",&hour_per_month);
	printf("Enter amount per month=");
	scanf("%f",&amount_per_month);
	salary=hour_per_month*amount_per_month;
	printf("Employee Id %d",emp_id);
	printf("\nSalary(with two decimal places) %0.2f",salary);	
}
