//18.Write a C program to accept two integers and check whether they are equal or not.
#include <stdio.h>

int main() {
    int n1,n2;
    printf("Enter first integer:");
    scanf("%d", &n1);
    printf("Enter second integer:");
    scanf("%d", &n2);
    if (n1 == n2) 
	{
        printf("n1 and n2 are equal");
    } 
	else 
	{
        printf("n1 and n2 are not equal");
    }
}
