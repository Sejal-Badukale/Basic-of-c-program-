//2.Create a structure to store an employee's ID, name, and salary, and write a program to print the details.
#include<stdio.h>
struct student{
	int emp_id;
	char name[20];
	float salary;
}s1;
int main()
{
	 printf("Enter Employee ID=");
	scanf("%d",&s1.emp_id);
 	printf("Enter Name=");
    scanf("%s",s1.name);
    printf("Enter Salary=");
	scanf("%f",&s1.salary);
    printf("\nStudent Information\n");
    printf("Employee ID: %d\n", s1.emp_id);
    printf("Name: %s\n", s1.name);
    printf("Salary: %f\n", s1.salary);
	}
