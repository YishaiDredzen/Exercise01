#include "Ex01.01.h"
#include <stdio.h>

#define INPUT_SIZE 1

/*Prints received inputted character till 'Q' or 'q' is inputted*/
void printInputtedChar(char input)
{
    printf_s("%c\n", input);
}

/*Receives inputted character till 'Q' or 'q' is inputted*/
void getCharInput(void)
{
    printf_s("Enter a character ('Q' or 'q' to Quit): ");
    char input;
    scanf_s(" %c", &input, INPUT_SIZE);
    if (input != 'q' && input != 'Q')
    {
        printInputtedChar(input);
        getCharInput();
    }
}

int main(void)
{
    getCharInput();
    return 0;
}