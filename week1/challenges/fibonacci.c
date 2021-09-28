#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int left = 1;
    int right = 1;
    int next;
    
    int lenght;
    
    do
    {
        lenght = get_int("Fibonacci Sequence Lenght: ");
    } 
    while (lenght < 3);
    
    printf("%i\n", left);
    printf("%i\n", right);
    
    for (int i = 2; i < lenght; i++)
    {
        next = left + right;
        printf("%i\n", next);
        left = right;
        right = next;
    }
}