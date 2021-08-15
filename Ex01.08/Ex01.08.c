#include <stdio.h>
#include "Ex01.08.h"

/*Computes the lower of two numbers*/
int Min(int firstNumber, int secondNumber)
{
    return (secondNumber > firstNumber) ? firstNumber : secondNumber;
}

/*Computes the higher of two numbers*/
int Max(int firstNumber, int secondNumber)
{
    return (firstNumber > secondNumber) ? firstNumber : secondNumber;
}

/*Prints a prompt for the user to enter a number*/
void PrintInputPrompt(void)
{
    printf_s("Enter a number: ");
}

/*Asks the user to input a number*/
int GetNumberInput(void)
{
    PrintInputPrompt();
    int inputNumber;
    scanf_s("%d", &inputNumber);
    return inputNumber;
}



int main(void)
{
    int input = GetNumberInput();
    int max = input;
    int secondHighestNumber = input;
    int min = input;
    int secondLowestNumber = input;
    input = GetNumberInput();

    while (input != 0)
    {
        if (Min(input, min) == min)
        {
            secondLowestNumber = Min(input, secondLowestNumber);
        }
        else
        {
            secondLowestNumber = min;
            min = input;
        }

        if (Max(input, max) == max)
        {
            secondHighestNumber = Max(input, secondHighestNumber);
        }
        else
        {
            secondHighestNumber = max;
            max = input;
        }
        input = GetNumberInput();
    }

    printf_s("The second lowest number entered was: %d.\n", secondLowestNumber);
    printf_s("The second highest number entered was: %d.", secondHighestNumber);
    return 0;
}