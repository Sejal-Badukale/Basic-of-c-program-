//15.Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
#include <stdio.h>

int main()
 {
    int s1,s2,s3;
    printf("Enter first side of triangle:");
    scanf("%d",&s1);
    printf("Enter second side of triangle:");
    scanf("%d",&s2);
    printf("Enter third side of triangle:");
    scanf("%d",&s3);
        if(s1==s2 && s2==s3 && s1==s3) 
		{
            printf("Triangle is equilateral");
        } 
		else if (s1==s2 || s2==s3 || s1==s3)
		{
            printf("Triangle is isosceles");
        } 
		else
		 {
            printf("Triangle is scalene");
        }
    } 
