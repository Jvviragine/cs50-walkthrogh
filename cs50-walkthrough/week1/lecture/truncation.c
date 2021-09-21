#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    // Get numbers from user
    int x = get_int("x: ");
    int y = get_int("y: ");
    
    
    //float z = x / y; // x / y will be an Integer, that latter will be casted into a Float
    float z = (float) x / (float) y;
    
    printf("%i / %i = %f\n", x, y, z);
}