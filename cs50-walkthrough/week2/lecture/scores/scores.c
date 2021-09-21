#include <stdio.h>
#include <cs50.h>

float average(int lenght, int array[]);

int main(void)
{
    // Get the number of Scores
    int n;
    do
    {
        n = get_int("Number of Scores: ");
    }
    while (n <= 0);

    // Get all the Scores from the User and add it to the Array
    int scores[n];

    for (int i = 0; i < n; i++)
    {
        do
        {
            scores[i] = get_int("Score %i: ", i + 1);
        }
        while (scores[i] < 0);
    }

    // Print the Average of the Scores
    printf("The Average of these %i Scores is %f\n", n, average(n, scores));

}

float average(int lenght, int array[])
{
    int sum = 0;
    for (int i = 0; i < lenght; i++)
    {
        sum += array[i];
    }
    return sum / (float) lenght;
}