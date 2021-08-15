#ifndef _Ex01_04_H_
#define _Ex01_04_H_

/**
 * @file Exercise 1 Question 4
 */

/**
 *@brief Asks user for an odd number as input for a base of a diamond.
 *@return diamondBaseSize the number of stars for the base of a diamond.
 */
int GetDiamondBaseSizeInput(void);

/**
 *@brief Prints a number of stars in the row.
 *@param numberOfStars hte number of stars to be printed in the row.
 */
void PrintStars(int numberOfStars);

/**
 *@brief Prints a number of spaces in the row.
 *@param numberOfSpaces the number of spaces to be printed
 */
void PrintSpaces(int numberOfSpaces);

/**
 *@brief Controls the printing of spaces and stars.
 *@param diamondBaseSize the number of stars at the base of the diamond.
 */
void PrintDiamond(int diamondBaseSize);

#endif
