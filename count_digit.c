/*
C Program to Count Number of Digits in an Integer
Example to count the number of digits in an integer entered by the user. The while loop is used to solve this program.
*/


#include <stdio.h>
int main()
{
    long long n;
    int count = 0;
    printf("Enter an integer: ");
    scanf("%lld", &n);
    while(n != 0)
    {
        // n = n/10
        n /= 10;
        ++count;
    }
    printf("Number of digits: %d", count);
}
