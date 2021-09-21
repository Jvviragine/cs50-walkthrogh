#include <cs50.h>
#include <stdio.h>

// n / 3 llamas are born
// n/ 4 llamas pass away

int main(void)
{
    // TODO: Prompt for start size
    int start;
    do
    {
        start = get_int("Start Size: ");
    }
    while (start < 9);

    // TODO: Prompt for end size
    int end;
    do
    {
        end = get_int("End Size: ");
    }
    while (end < start);

    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    int population = start;
    while (population < end)
    {
        population += (population / 3) - (population / 4);
        years++;
    }

    // TODO: Print number of years
    printf("Years: %i\n", years);
}