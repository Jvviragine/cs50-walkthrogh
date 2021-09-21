#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("n: ");
    
    // Switch without Breaks
    switch(n) 
    {
        case 5:
            printf("Cinque\n");
        case 4:
            printf("Quattro\n");
        case 3: 
            printf("Tre\n");
        case 2:
            printf("Due\n");
        case 1:
            printf("Uno\n");
        default:
            printf("Blast-off!\n");
    }
}