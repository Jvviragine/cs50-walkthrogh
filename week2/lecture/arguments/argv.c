#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
     // argc - Argument Count - Number of words the user types at the propmt
     // argv - Argument Vector - Stores all the Strings the user types after your program's name

     if (argc == 2)
     {
         for (int i = 0, lenght = strlen(argv[1]); i < lenght; i++)
         {
             printf("%c\n", argv[1][i]);
         }
     }
     else
     {
         printf("hello, world\n");
     }
}
