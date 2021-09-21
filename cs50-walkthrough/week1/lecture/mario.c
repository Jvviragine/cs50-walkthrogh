#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get Positive Measures
    int width;
    int height;

    do
    {
        width = get_int("Width: ");
        height = get_int("Height: ");
    }
    while ((width < 1) || (height < 1));

    // Draw the Rectangle
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

