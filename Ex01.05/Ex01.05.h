#ifndef _Ex01_05_H_
#define _Ex01_05_H_

/**
 * @file Exercise 1 Question 5
 */

/**
 * @brief gets an ID number as input from user
 * @return inputted  ID number
*/
int GetIDNumberInput(void);

/**
 * @brief checks the ID number is in the range of ID_MIN and ID_MAX
 * @param IDNumber
 * @return true if in range, false if out of range
*/
bool IDIsInRange(int IDNumber);

/**
 * @brief computes right most digit of ID number
 * @param IDNumber
 * @return right most digit of the ID number
*/
int GetNextIndividualDigit(int IDNumber);

/**
 * @brief Computes the sum of the digits of a two digit number.
 * @param currentDigitDoubled
 * @return sum of the digits
*/
int addProductDigits(int currentDigitDoubled);

/**
 * @brief Doubles the current digit and adds the digits of the product if it is greater than 10
 * @param currentDigit
 * @return doubleDigit the double of currentDigit or the sum of its digits
*/
int DoubleDigit(int currentDigit);

/**
 * @brief Computes whether an ID number is a valid Te'udat Zehut number
 * @param IDNumber
 * @return Whether the ID number is valid or not
*/
bool CheckIDValidity(int IDNumber);

#endif
