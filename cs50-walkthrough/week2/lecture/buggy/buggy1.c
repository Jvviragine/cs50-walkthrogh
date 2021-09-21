#include <cs50.h>
#include <stdio.h>

// Prototype
int get_negative_int(void);

int main(void)
{
    // Get negative Integer from user
    int i = get_negative_int(); // Put the Breaking Point Here -> Step inside the Function
    printf("%i", i);
}

int get_negative_int(void)
{
    int n;
    do
    {
        n = get_int("Negative Integer: ");
    }
    while (n >= 0); // The original code was (n < 0), so use the Debbuger to see the condition was inverted
    return n;
}