#include <stdio.h>
#include <cs50.h>

// If the Number is Odd, 3n + 1
// If the Number is Even, n / 2

int main(void)
{
    int n;
    do
    {
        n = get_int("n: ");
    }
    while (n < 1);

    int steps = 0;

    do
    {

        if (n % 2 != 0)
        {
            printf("%i is Odd, so we apply 3 * %i + 1 = %i\n", n, n, 3 * n + 1);
            n = 3 * n + 1;
        }
        else
        {
            printf("%i is Even, so we apply %i / 2 = %i\n", n, n, n / 2);
            n = n / 2;
        }

        steps++;

    }
    while (n != 1);
    
    printf("The Total Number of Steps to get to 1 was %i\n", steps);
}