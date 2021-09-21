#include <stdio.h>
#include <cs50.h>

int main(void)
{

    printf("Use your Movement keys to Play! In case you wanna Stop, type !\n");

    int x = 0;
    int y = 0;

    char character;

    do
    {
        character = get_char("Move your Character: ");

        switch(character)
        {
            case 'w':
                y++;
                printf("Going Up! (%i, %i)\n", x, y);
                break;
            case 'a':
                x--;
                printf("Going Left! (%i, %i)\n", x, y);
                break;
            case 's':
                y--;
                printf("Going Down! (%i, %i)\n", x, y);
                break;
            case 'd':
                x++;
                printf("Going Right! (%i, %i)\n", x, y);
                break;
            case '!':
                printf("Okay, let's stop here! Your Final position was (%i, %i)\n", x, y);
                break;
            default:
                printf("%c is not a valid command! (%i, %i)\n", character, x, y);
        }
    } while (character != '!'); // Until the User wants to Stop playing


}
