/*17.Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. 
Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F */

#include<stdio.h>
int main()
{
	int phy,chem,bio,maths,com;
    float percentage,total;
	printf("Enter marks of Physics, Chemistry, Biology, Mathematics and Computer= ");
	scanf("%d %d %d %d %d",&phy,&chem,&bio,&maths,&com);
	total=phy+chem+bio+maths+com;
	percentage=(total / 500) * 100;
	printf("Percentage=%f",percentage);
	
	if(percentage>=90)
	{
		printf("\nGrade A");
	}
	else if(percentage>=80)
	{
		printf("\nGrade B");
	}
	else if(percentage>=70)
	{
		printf("\nGrade C");
	}
	else if(percentage>=60)
	{
		printf("\nGrade D");
	}
	else if(percentage >= 40)
	{
		printf("\nGrade E");
	}
	else
	{
		printf("\nGrade F");
	}
}


