/*
C Program to Reverse a Number
Example to reverse an integer entered by the user. This problem is solved using while loop in this example.
*/

#include <stdio.h>  // declare the headerfile

// starting of main  function
int main()
{
    int n, reversedNumber = 0, remainder;   // initialize the variable

    printf("Enter an integer: ");
    scanf("%d", &n);    //Taking input from user
    
    while(n != 0)
    {
        // logic is applied below
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }

    printf("Reversed Number = %d", reversedNumber);     // printing the reverse number
    return 0;
}
