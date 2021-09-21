#include <stdio.h>
#include <cs50.h>

/* FOR Loop
int main(void)
{
    // First set i = 0; then check the condition; then run the code INSIDE the loop; finally, increment i by 1

    for (int i = 0; i < 50; i++) // Repeats 50 times and counts from 0 to 49
    {
        printf("%i\n", i);
    }
}
*/

// While Loop
int main(void)
{
    int i = 0; 
    while (i < 50) // Check condition First; then executes the code inside
    {
        printf("%i\n", i);
        i++;
    }
}
