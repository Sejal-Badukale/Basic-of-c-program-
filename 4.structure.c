/*4.Create an array of structure to store  student
 information and display only those students data 
 who are having phone number with 88 in ending. */
 
#include<stdio.h>
struct student{
	char name[30];
	int age;
	int phone_no;
}s1[3];
int main()
{
	int i;
	for(i=0;i<3;i++)
	{
	printf("Enter Name=");
    scanf("%s",s1[i].name);
    printf("Enter Age=");
	scanf("%d",&s1[i].age);
	printf("Enter Phone Number=");
	scanf("%d",&s1[i].phone_no);
	}
	printf("\nStudent Information:\n");
	for(i=0;i<3;i++)
	{
	if(s1[i].phone_no % 100 == 88){
	printf("student %d:\n", i + 1);
	printf("Name: %s\n", s1[i].name);
    printf("Age: %d\n", s1[i].age);
    printf("Phone: %d\n", s1[i].phone_no);	
	}
	}
	
} 
