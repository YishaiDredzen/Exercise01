#include <stdio.h>
#include <stdbool.h>
#include "Ex01.05.h"

#define ID_MIN 100000000
#define ID_MAX 999999999

/*Gets an ID number as input from user.
*/
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

/*Computes the double the current digit and adds the digits of the product if it is greater than 10.*/
int DoubleDigit(int currentDigit)
{
    int doubledDigit = currentDigit * 2;
    return (doubledDigit >= 10) ? addProductDigits(doubledDigit) : doubledDigit;
}

/*Computes whether an ID number is a valid Te'udat Zehut number*/
bool CheckIDValidity(int IDNumber)
{
    int sumOfDigits = 0;
    int weight = 1;
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
    bool isValidID = false;
    if (sumOfDigits % 10 == 0)
    {
        isValidID = true;
    }
    return isValidID;
}

int main(void)
{
    printf_s("Enter an ID number: ");
    int IDNumber = GetIDNumberInput();
    if (!IDIsInRange(IDNumber))
    {
        printf_s("Invalid ID Number was inputted.\n");
    }
    bool isValidID = CheckIDValidity(IDNumber);
    printf_s("ID number %d is ", IDNumber);
    printf_s("%s", isValidID ? "valid" : "invalid");
    return 0;
}