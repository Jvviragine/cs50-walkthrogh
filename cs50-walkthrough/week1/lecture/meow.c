#include <stdio.h>
#include <cs50.h>

// Prototype - There will be a Function called Meow - Define it after
// If we just Define it after the "int main(void)" without Declaring it, we'll get an error
void meow(int n);

int main(void)
{
    meow(10);
}

void meow(int n) 
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}