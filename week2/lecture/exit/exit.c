#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("missing command-line Argumrnt\n");
        return 1; // Return an Error Code
    }
    printf("hello, %s\n", argv[1]);
    return 0; // All is well code
    
    // We can actually see those Error messages if we want
    // echo $? - What was my Exit status 
}