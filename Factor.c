/*
C Program to Display Factors of a Number
Example to find all factors of an integer (entered by the user) using for loop and if statement.
*/

#include <stdio.h>
int main()
{
    int number, i;
    printf("Enter a positive integer: ");
    scanf("%d",&number);
    printf("Factors of %d are: ", number);
    for(i=1; i <= number; ++i)
    {
        if (number%i == 0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
