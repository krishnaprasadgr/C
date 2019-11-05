/*
C Program to Calculate the Power of a Number
Example on how to calculate the power of a number if the exponent is an integer. Also, you will learn to compute the 
power using pow() function.
*/

#include <stdio.h>
int main()
{
    int base, exponent;
    long long result = 1;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exponent);
    while (exponent != 0)
    {
        result *= base;
        --exponent;
    }
    printf("Answer = %lld", result);
    return 0;
}
