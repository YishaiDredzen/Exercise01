#ifndef _Ex01_08_H_
#define _Ex01_08_H_

/**
 * @file Exercise 1 Question 8
 */

/**
 * @brief Computes the lower of two numbers
 * @param firstNumber first number to be compared.
 * @param secondNumber second number to be compared to.
 * @return the lower of two numbers
*/
int Min(int firstNumber, int secondNumber);

/**
 * @brief Computes the higher of two numbers.
 * @param firstNumber first number to be compared.
 * @param secondNumber second number to be compared to.
 * @return The higher of the two numbers.
*/
int Max(int firstNumber, int secondNumber);

/**
 * @brief Asks the user to input a number
 * @return the inputted value
*/
int GetNumberInput(void);

/**
 * @brief Prints a prompt for the user to enter in a number.
*/
void PrintInputPrompt(void);

#endif

