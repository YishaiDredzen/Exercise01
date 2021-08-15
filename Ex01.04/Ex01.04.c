#include <stdio.h>
#include <stdlib.h>
#include "Ex01.04.h"

/*Asks user for an odd number as input for a base of a diamond.*/
int GetDiamondBaseSizeInput(void)
{
    int diamondBaseSize;
    printf_s("Enter an odd number: ");
    scanf_s("%d", &diamondBaseSize);
    if (diamondBaseSize % 2 == 0)
    {
        return 0; /*didn't know what to return for an error*/
    }
    else
    {
        return diamondBaseSize;
    }
}

/*Prints a number of stars in the row.*/
void PrintStars(int numberOfStars)
{
    for (int index = 1; index <= numberOfStars; ++index)
    {
        printf_s("*");
    }
    printf_s("\n");
}

/*Prints a number of spaces in the row.*/
void PrintSpaces(int numberOfSpaces)
{
    for (int index = 0; index < numberOfSpaces; ++index)
    {
        printf_s(" ");
    }
}

/*Controls the printing of spaces and stars.*/
void PrintDiamond(int diamondBaseSize)
{
    int linesFromBase = diamondBaseSize / 2;
    int numberOfStars;
    for (int rowNumber = 0; rowNumber < diamondBaseSize; rowNumber++)
    {
        int numberOfSpaces = abs(linesFromBase - rowNumber);
        PrintSpaces(numberOfSpaces);
        numberOfStars = diamondBaseSize - (2 * numberOfSpaces);
        PrintStars(numberOfStars);
    }
}

int main(void)
{
    int diamondBaseSize = GetDiamondBaseSizeInput();
    if (diamondBaseSize == 0)
    {
        printf_s("An even number was inputted.");
    }
    PrintDiamond(diamondBaseSize);

    return 0;
}