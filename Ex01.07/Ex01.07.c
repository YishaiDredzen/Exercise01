#include <stdio.h>
#include "Ex01.07.h"

/*prints number that was entered by user.*/
void PrintNumber(int inputNumber)
{
    printf_s("%d ", inputNumber);
}

/*Asks user to enter a number.*/
void GetNumberInput(void)
{
    printf_s("Enter a number (0 to exit): ");
    int numberInputted;
    scanf_s(" %d", &numberInputted);
    if (numberInputted != 0)
    {
        GetNumberInput();
        PrintNumber(numberInputted);
    }

}

int main(void)
{
    GetNumberInput();
    return 0;
}