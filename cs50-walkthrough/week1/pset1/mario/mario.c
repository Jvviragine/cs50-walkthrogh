#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get Height from 1...8
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Control the Height
    for (int h = 0; h < height; h++)
    {
        // Create Right Alligned Pyramid
        for (int spaces = height - h - 1; spaces > 0; spaces--) // Creates the Spaces
        {
            printf(" ");
        }
        for (int slashes = h + 1; slashes > 0; slashes--)
        {
            printf("#");
        }

        // Creates the 2 Spaces in the Middle
        printf("  ");

        // Creates Left Alligned Pyramid
        for (int slashes = h + 1; slashes > 0; slashes --)
        {
            printf("#");
        }

        // Breaks to the Next Line
        printf("\n");
    }

}