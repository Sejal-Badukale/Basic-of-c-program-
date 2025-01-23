//structure user defind data type
#include<stdio.h>
struct student{
	char name[20];
	int rollno;
	float fees;
}s1;
int main()
{
 	printf("Enter Name=");
    scanf("%s",s1.name); //we dont use ampersand here
    printf("\nEnter Rollno=");
	scanf("%d",&s1.rollno);
	printf("\nEnter fees=");
	scanf("%f",&s1.fees);
    printf("\nStudent Information\n");
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.rollno);
    printf("Fees: %.2f\n", s1.fees);
	}
