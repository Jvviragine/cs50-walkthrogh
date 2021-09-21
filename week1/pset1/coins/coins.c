#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // Get Change from the User
    float dollars;
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars < 0); // Make sure it's not a Negative number

    // Convert to Cents
    int cents = round(dollars * 100); // Round Floating Point Number

    // Figure out how many coins are needed
    int coins = 0;
    while (cents > 0) // While I still have cash on my hands
    {
        if (cents >= 25)
        {
            printf("%i - 25 = %i\n", cents, cents - 25);
            cents -= 25;
        }
        else if (cents >= 10)
        {
            printf("%i - 10 = %i\n", cents, cents - 10);
            cents -= 10;
        }
        else if (cents >= 5)
        {
            printf("%i - 5 = %i\n", cents, cents - 5);
            cents -= 5;
        }
        else
        {
            printf("%i - 1 = %i\n", cents, cents - 1);
            cents -= 1;
        }

        coins++;
    }
    printf("Total ammount of Coins needed: %i\n", coins);
}