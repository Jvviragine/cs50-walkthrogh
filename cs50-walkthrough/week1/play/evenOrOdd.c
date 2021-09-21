#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("n: ");
    string classification = (n % 2 == 0) ? "Even" : "Odd"; // Ternary Operator
    printf("%i is an %s Number!\n", n, classification);
    
    /*
    if (n % 2 == 0)
    {
        printf("%i is Even!", n);
    }
    else 
    {
        printf("%i is Odd!", n);
    }
    */
}