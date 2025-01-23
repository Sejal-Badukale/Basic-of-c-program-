//1. Define a structure to store student details (name, age, and marks), take input from the user, and display the details.
#include<stdio.h>
struct student{
	char name[20];
	int age;
	float marks;
}s1;
int main()
{
 	printf("Enter Name=");
    scanf("%s",s1.name);
    printf("\nEnter Age=");
	scanf("%d",&s1.age);
	printf("\nEnter Marks=");
	scanf("%f",&s1.marks);
    printf("\nStudent Information\n");
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.age);
    printf("Fees: %.2f\n", s1.marks);
	}
