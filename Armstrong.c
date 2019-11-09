/*
C Program to Check Armstrong Number
Example to check whether an integer (entered by the user) is an Armstrong number or not using while loop and if...else statement.

In case of an Armstrong number of 3 digits, the sum of cubes of each digits is equal to the number itself. For example:
153 = 1*1*1 + 5*5*5 + 3*3*3  // 153 is an Armstrong number

*/

#include <stdio.h>
int main()
{
    int number, originalNumber, remainder, result = 0;
    printf("Enter a three digit integer: ");
    scanf("%d", &number);
    originalNumber = number;
    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += remainder*remainder*remainder;
        originalNumber /= 10;
    }
    if(result == number)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);
    return 0;
}
