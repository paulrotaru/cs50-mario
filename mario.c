#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // user input height of the pyramide ( 1 to 8)
    int h;

    do
    {

        h = get_int("Height: ");

    }
    while (h < 1 || h > 8);

    // use i for making rows
    for (int i = 0; i < h; i++)
    {
        // use k for making spaces
        for (int k = 0; k < h - i - 1; k++)
        {
            printf(" ");
        }
        //use j for making #
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }



        printf("\n");

    }

}