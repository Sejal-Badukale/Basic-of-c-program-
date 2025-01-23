//structure user defind data type
#include<stdio.h>
struct student{
	char name[20];
	int rollno;
	float fees;
};
int main()
{
	struct student s1={"John",101,5500};
	printf("%s ",s1.name);
	printf("%d ",s1.rollno);
	printf("%f",s1.fees);
	
}
