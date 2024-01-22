#include "bit_manipulation.h"

/**
 * setBit - Set a specific bit at position 'pos'.
 * @num: The input number.
 * @pos: The position of the bit to set.
 *
 * Return: The number after setting the bit.
 */
unsigned int setBit(unsigned int num, int pos)
{
	return (num | (1 << pos));
}

/**
 * clearBit - Clear a specific bit at position 'pos'.
 * @num: The input number.
 * @pos: The position of the bit to clear.
 *
 * Return: The number after clearing the bit.
 */
unsigned int clearBit(unsigned int num, int pos)
{
	return (num & ~(1 << pos));
}

/**
 * toggleBit - Toggle a specific bit at position 'pos'.
 * @num: The input number.
 * @pos: The position of the bit to toggle.
 *
 * Return: The number after toggling the bit.
 */
unsigned int toggleBit(unsigned int num, int pos)
{
	return (num ^ (1 << pos));
}





/*Task 2*/
/*Function to check if a number is even using bitwise AND*/
int isEven(int num)
{
	return ((num & 1) == 0);
}


/*Function to check if a number is odd using bitwise AND*/
int isOdd(int num)
{
	return ((num & 1) != 0);
}


/**
 * swapWithoutTemp - Swap two values without using a temporary variable.
 * @a: Pointer to the first value.
 * @b: Pointer to the second value.
 */
void swapWithoutTemp(int *a, int *b)
{
     	*a = *a ^ *b;
    	*b = *a ^ *b;
    	*a = *a ^ *b;
}
