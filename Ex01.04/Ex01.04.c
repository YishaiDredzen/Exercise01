#include <stdio.h>
#include <stdlib.h>
#include "Ex01.04.h"

/*Asks user for an odd number as input for a base of a diamond.*/
int GetDiamondBaseSizeInput(void)
{
    unsigned int diamondBaseSize;
    printf_s("Enter an odd number: ");
    scanf_s("%u", &diamondBaseSize);
    if (diamondBaseSize % 2 == 0)
    {
        return 0;
    }
    else
    {
        return diamondBaseSize;
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
        for (int index = 0; index < numberOfSpaces; ++index)
        {
            printf_s(" ");
        }

        numberOfStars = diamondBaseSize - (2 * numberOfSpaces);
        for (int index = 1; index <= numberOfStars; ++index)
        {
            printf_s("*");
        }
        printf_s("\n");
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