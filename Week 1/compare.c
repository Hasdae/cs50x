#include <cs50.c>
#include <stdio.h>
int main(void)
{
    int firstNumber = get_int("Whats the first number? ");
    int secondNumber = get_int("Whats the second number? ");
    
    if (firstNumber > secondNumber)
    {
        printf("The first number is greater than second");
    }
    else if(firstNumber < secondNumber)
    {
        printf("The first number is less than second");
    }
    else 
    {
        printf("The numbers are equal");
    }
}