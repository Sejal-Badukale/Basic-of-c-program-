//2.write a c program to find number is prime or not.
#include <stdio.h>
int main() {
    int num, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
        for (i = 2;i <= num; i++) 
		{
            if (num % i == 0)
			 {
                flag = 1;
                break;
            }
        }
        if (flag == 1) 
		{
            printf("%d is not a prime number.\n", num);
        } else 
		{
            printf("%d is a prime number.\n", num);
        }
    }



