#include <stdio.h>
#include <cs50.h> // Allows us to use "get_string"

int main(void)

    string name = get_string("What's your name?\n");
    printf("hello, %s\n", name);

}