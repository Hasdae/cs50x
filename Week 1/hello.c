#include <stdio.h>
#include <cs50.c>

int main(void)
{
    /*
    string firstName = get_string ("","Whats your first name? ");
    string lastName = get_string ("","Whats your last name? ");
    printf("Hello, %s %s!\n", firstName, lastName);
    */
    int x = 1;
    int y = 1;

    if (x < y)
    {
        printf("x is less than y");
    }
    else if (x > y)
    {
        printf("x is more than y");
    }
    else
    {
        printf("x is equal to y");
    }
}