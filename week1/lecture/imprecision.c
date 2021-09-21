#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float x = get_float("x: ");
    float y = get_float("y: ");
    
    printf("%.50f\n", x / y); // Print 50 Decimal Characters
    // 2 / 3 = 0.66666668653488159179687500000000000000000000000000
    // We don't have enough Bits to store all possible values
}