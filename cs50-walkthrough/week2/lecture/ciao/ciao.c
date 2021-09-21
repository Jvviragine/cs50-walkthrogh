#include <cs50.h> // Sometimes it's not enough to just include the header file
#include <stdio.h>

int main(void)
{
    string name = get_string("Come ti chiami? ");
    printf("ciao, %s\n", name);
}

// clang -o ciao ciao.c     Run clang(compiler), take ciao.c as Input and Output ciao

// clang -o ciao ciao.c -lcs50      Incorporates the cs50 library when compilling the code
