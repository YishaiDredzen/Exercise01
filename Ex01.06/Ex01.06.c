#include <stdbool.h>
#include <stdio.h>
#include "Ex01.06.h"

#define ID_MIN 10000000
#define ID_MAX 99999999

/*Asks user for an ID number as input.*/
int GetIDNumberInput(void)
{
    int IDNumber;
    scanf_s(" %d", &IDNumber);
    return IDNumber;
}

/*Checks the ID number is in the range of ID_MIN and ID_MAX.*/
bool IDIsInRange(int IDNumber)
{
    bool isValidIDNumber = false;
    if (IDNumber >= ID_MIN && IDNumber <= ID_MAX)
    {
        isValidIDNumber = true;
    }
    return isValidIDNumber;
}

/*Computes right most digit of ID number.*/
int GetNextIndividualDigit(int IDNumber)
{
    return IDNumber % 10;
}

/*Computes the sum of the digits of a two digit number.*/
int addProductDigits(int currentDigitDoubled)
{
    int units = currentDigitDoubled % 10;
    int tens = currentDigitDoubled / 10;
    return units + tens;
}

/*Doubles the current digit and adds the digits of the product if it is greater than 10.*/
int DoubleDigit(int currentDigit)
{
    int doubledDigit = currentDigit * 2;
    return (doubledDigit >= 10) ? addProductDigits(doubledDigit) : doubledDigit;
}

/*Computes the check digit used to determine the validity of an ID number.*/
int ComputeIDCheckDigit(int IDNumber)
{
    int sumOfDigits = 0;
    int weight = 2;
    for (int index = 1; index <= ID_MIN; index *= 10)
    {
        int currentDigit = GetNextIndividualDigit(IDNumber);
        if (weight == 1)
        {
            weight++;
        }
        else
        {
            currentDigit = DoubleDigit(currentDigit);
            weight--;
        }
        sumOfDigits += currentDigit;
        IDNumber /= 10;
    }
    int checkDigit = 10 - (sumOfDigits % 10);
    return checkDigit;
}

int main(void)
{
    printf_s("Enter an ID number without the check digit:");
    int IDNumber = GetIDNumberInput();
    if (!IDIsInRange(IDNumber))
    {
        printf_s("Inputted ID number was too long or too short.\n");
    }
    int checkDigit = ComputeIDCheckDigit(IDNumber);
    printf_s("The check digit is %d", checkDigit);
    return 0;
}