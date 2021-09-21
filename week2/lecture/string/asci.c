#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = "HI!"; // C doesn't have an Actual Data Type called String
    // String - Array of Characters
    // When we create a String of 3 characters, technically, it has a 4th '\0' - Nul - Clue to the Computer to know its size
    // Nul - 0 in ASCI
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
    printf("%i %i %i\n", c1, c2, c3);

    // Dangerous feature in C
    printf("%i %i %i %i %i\n", s[0], s[1], s[2], s[3], s[4]); // s[4] pocking at the Computer's memory where we shoudln't
    
}