#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get Pyramid Height from 1...8
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Create Pyramid
    for (int h = height; h >= 1; h--) // Controls the Height
    {
        for (int spaces = h - 1; spaces > 0; spaces--) // Prints the Spaces
        {
            printf(" ");
        }
        for (int slashes = 1; slashes <= height - h + 1; slashes++) // Prints the #s
        {
            printf("#");
        }
        printf("\n"); // Jumps to the next line
    }
}