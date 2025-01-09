//14.Write a C program to input all sides of a triangle and check whether triangle is valid or not.
#include <stdio.h>

int main() 
{
    int s1, s2, s3;
    printf("Enter first side of triangle: ");
    scanf("%d", &s1);
    printf("Enter second side of triangle: ");
    scanf("%d", &s2);
    printf("Enter third side of triangle: ");
    scanf("%d", &s3);
    if (s1+s2>s3 && s2+s3>s1 && s1+s3>s2) 
	{
        printf("Triangle is valid");
    } else 
	{
        printf("Triangle is not valid");
    }
}

