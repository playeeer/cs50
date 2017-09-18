   
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int bottles = 12;
    {
        printf("How many times you take a shower?: ");
        int minutes = get_int();
        printf("Used bottles with water: %i\n" , minutes*bottles);
    }
}
