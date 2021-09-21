#include <cs50.h>
#include <stdio.h>
/*
int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("%i + %i = %i\n", x, y,  x + y);
}

// Int supports up to 4 Trillion different Values 
// from -2 Trillion up to +2 Trillion

// Long Version that Supports Bigger values:
*/
int main(void)
{
    long x = get_long("x: ");
    long y = get_long("y: ");
    
    printf("%li + %li = %li\n", x, y, x + y);
}