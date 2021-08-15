#include <stdio.h>
#include "Ex01.03.h"
#define FIRST_POSITION 0
#define NULL_POSITION 0

/*Computes the number of characters in a string up to but not including the termination null character.*/
int CustomStrlen(char* inputString, int currentPosition)
{
    if (inputString[currentPosition] == '\0')
    {
        return NULL_POSITION;
    }
    return 1 + CustomStrlen(inputString, currentPosition + 1);
}

int main(void)
{
    char* stringForTesting = "Hello, my name is Harry";
    int lengthOfStringForTesting = CustomStrlen(stringForTesting, FIRST_POSITION);
    printf_s("Length of string is %d", lengthOfStringForTesting);
    return 0;
}