#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <time.h>



int total_numbers(void);
int random_number_generator(int interval);

int totalNumbers; // Variable needs to be declared outside so it can have a Universal Scope

int main(void)
{
    totalNumbers = total_numbers();

    int secretNumber = random_number_generator(totalNumbers);

    int guess;

    do
    {
        guess = get_int("Guess the Secret Number = ");
        
        if (guess < 0 || guess > totalNumbers)
        {
            printf("Number out of Bounds! Guess a number from 0 to %i!\n", totalNumbers);
        }
        else if (guess > secretNumber)
        {
            printf("Too High!!\n");
        }
        else if (guess < secretNumber)
        {
            printf("Too Low!!\n");
        }
        else
        {
            printf("Wow! %i is the Secret Number! Good Job!\n", secretNumber);
        }
        
        
        
    }
    while (guess != secretNumber);


}

int total_numbers(void) // Get the Biggest Number from the User
{
    int n;

    do
    {
        n = get_int("Total Numbers: ");

    }
    while (n < 1);

    return n;
}

int random_number_generator(int interval) // Returns a Random Number from 0 to the User's Choice
{
    int lower = 0;
    int higher = totalNumbers;

    srand(time(0)); // time() returns a different time every time the program is run. Then, srand() will have a different seed everytime 
    
    int randomNumber = (rand() % (higher - lower + 1)) + lower;
    // rand() generates a HUGE random number
    // (hugher - lower + 1) Uses the Interval and the +1 includes the first number
    // rand() % (higher - lower + 1) + 1 Gets the remainder of that Division -> Huge Number / 10 has a Remainder of 0...9 -> Adding the +1 we get to 10-

    return randomNumber;
}