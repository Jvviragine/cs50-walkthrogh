#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");

     for (int i = 0, lenght = strlen(s); i < lenght; i++)
     {
        //  if (s[i] >= 'a' && s[i] <= 'z')
        //  {
        //      printf("%c", s[i] - 32);
        //  }
        //  else
        //  {
        //      printf("%c", s[i]);
        //  }

        printf("%c", toupper(s[i]));
     }
     printf("\n");
}
