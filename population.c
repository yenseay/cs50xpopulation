#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int startN;
    do
    {
        startN = get_int("Enter your starting population size: ");
    } while (startN < 9);
    // TODO: Prompt for end size
    int endN;
    do
    {
        endN = get_int("Enter your end population size: ");
    }
    while (endN < startN);
    // TODO: Calculate number of years until we reach threshold
    int years = 0;
        while(startN < endN)
        {
            startN = startN + (startN/3) - (startN/4);
            years++;
        }
    // TODO: Print number of years
    printf("Years: %i\n", years);
};