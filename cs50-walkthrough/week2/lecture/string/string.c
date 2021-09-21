#include <stdio.h>
#include <cs50.h>

int string_lenght(string s);
string text;

int main(void)
{
    text = get_string("Text: ");

    printf("%s is %i characters long!\n", text, string_lenght(text));

}

int string_lenght(string s)
{
    int i = 0;
    while (((int) text[i]) != 0)
    {
        i++;
    }

    return i;
}
