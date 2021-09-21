#include <stdio.h>
#include <cs50.h>
#include <math.h> // use Exponentials


int get_digit(long n, int i);
bool check_sum(long n);

int digits(long n);

string card_brand(long n);

long number; // Needs Global Scope to be used inside all Functions

int main(void)
{
    // Get the Long Number from the User
    do
    {
        number = get_long("Number: ");
    }
    while (number < 0);

    // Print Credit Card Brand to the User
    if (check_sum(number)) // If the number is Valid, we can check for the Brand
    {
        printf("%s\n", card_brand(number));
    }
    else // If the Sum is already not Valid, we don't even need to waste time with the rest
    {
        printf("INVALID\n");
    }


}

// Returns a specific Digit from a Number
int get_digit(long n, int i) // 0 being the Last Digit
{
    return (int)((n / (long) pow(10, i)) % 10); // (1234, 2) -> (1234 / 10^2) % 10 -> 2
}

// Returns the Number of Digits in a Number
int digits(long n)
{
    int counter = 0;
    do
    {
        n /= 10;
        counter ++;
    }
    while (n >= 1);
    return counter;
}

// Applies Luhn's Algorithm and says if it's a Valid Credit Card
bool check_sum(long n)
{
    int digits_sum = 0;
    int total_sum = 0;

    for (int i = 0; i < digits(number); i++)
    {
        int digit = get_digit(number, i);

        if (i % 2 != 0)
        {
            digits_sum += (digit * 2 >= 10) ? ((digit * 2 / 10) + ((digit * 2) % 10)) : (digit * 2);
        }
        else
        {
            total_sum += digit;
        }
    }

    total_sum += digits_sum;

    return (total_sum % 10 == 0) ? true : false;
}

// Returns the Credit Card Brand or "INVALID" if it coudln't match
string card_brand(long n)
{
    string brand = " ";

    int total_digits = digits(number);
    int first_digit = get_digit(number, total_digits - 1);
    int second_digit = get_digit(number, total_digits - 2);

    int initial = first_digit * 10 + second_digit;

    if ((total_digits == 15) && (initial == 34 || initial == 37))
    {
        brand = "AMEX";
    }
    else if ((total_digits == 16) && (initial == 51 || initial == 52 || initial == 53 || initial == 54 || initial == 55))
    {
        brand = "MASTERCARD";
    }
    else if ((total_digits == 13 || total_digits == 16) && (first_digit == 4))
    {
        brand = "VISA";
    }
    else
    {
        brand = "INVALID";
    }

    return brand;
}
