#include <iostream>

int main() {
int num1, num2, sum;

// Prompt user to enter two integers
printf("Enter two integers: ");
scanf("%d %d", &num1, &num2);

// Calculate the sum
sum = num1 + num2;

// Display the result
printf("Sum of %d and %d is: %d\n", num1, num2, sum);

return 0;
}