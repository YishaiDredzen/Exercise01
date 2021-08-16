#include "Ex01.02.h"
#include <stdio.h>

#define ASCII_DIST_BETWEEN_CASES 32
#define INPUT_SIZE 1
/*Prints inputted character*/
void PrintUpperCaseInputtedChar(char input)
{
    if (input <= 'z' && input >= 'a')
    {
        printf_s("%c\n", input - ASCII_DIST_BETWEEN_CASES);
    }
    else
    {
        printf_s("%c\n", input);
    }

}

/*Asks for the user to input a character until 'Q' or 'q' is entered*/
void GetCharInput()
{
    printf_s("Enter a character ('Q' or 'q' to Quit): ");
    char input;
    scanf_s(" %c", &input, INPUT_SIZE);
    if (input != 'q' && input != 'Q')
    {
        PrintUpperCaseInputtedChar(input);
        GetCharInput();
    }
}

int main()
{
    GetCharInput();
    return 0;
}
