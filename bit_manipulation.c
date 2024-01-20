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
