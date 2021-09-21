#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input:  ");
    printf("Output: ");
    for (int i = 0, n = strlen(s); i < n; i++) // Or s[i] != '\0'
    {
        printf("%c", s[i]);
    }
    printf("\n");
}