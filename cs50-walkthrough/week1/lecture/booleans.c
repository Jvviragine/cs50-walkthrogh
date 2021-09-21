#include <stdio.h>

// C doesn't naturally have Boolean Types
// We can include <cs50.h> to have access to that data type

int main(void)
{
    // 0 is False and the other integers are True
    int bool1 = 1;
    int bool2 = 21;
    int bool3 = 0;
    
    if (bool1 && bool2) 
    {
        printf("In C, %i and %i are equal to True", bool1, bool2);
    }
    
    if (!bool3) 
    {
        printf("In C, %i is False", bool3);
    }
}