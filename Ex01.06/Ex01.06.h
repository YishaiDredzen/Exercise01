#ifndef _Ex01_06_H_
#define _Ex01_06_H_

/**
 * @file Exercise 1 Question 6
 */

/**
 * @brief Asks the user for an ID number as input.
 * @return inputted  ID number
*/
int GetIDNumberInput(void);

/**
 * @brief Checks the ID number is in the range of ID_MIN and ID_MAX
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
 * @brief Computes the som of the digits of a two digit number.
 * @param currentDigitDoubled
 * @return sum of the digits
*/
int addProductDigits(int currentDigitDoubled);

/**
 * @brief Doubles the current digit
 * @param currentDigit
 * @return currentDigit * 2 or sum of the product's digits.
*/
int DoubleDigit(int currentDigit);

/**
 * @brief Computes the check digit used to determine the validity of an ID number
 * @param IDNumber
 * @return check digit
*/
int ComputeIDCheckDigit(int IDNumber);

#endif
