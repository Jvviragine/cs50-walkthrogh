#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char c = get_char("Do you aggre? ");

    if (c == 'y' || c == 'Y')
    {
        printf("Agreed!\n");
    }
    else if (c == 'n' || c == 'n') {
        printf("Not Agreed!\n");
    }
}