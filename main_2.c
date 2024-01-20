#include "bit_manipulation.h"
/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	unsigned int num = 10;
	int number;

	/*Set bit at position 2*/
	num = setBit(num, 2);
	printf("After setting bit at position 2: %u\n", num);

	/*Clear bit at position 3*/
	num = clearBit(num, 3);
	printf("After clearing bit at position 3: %u\n", num);

	/*Toggle bit at position 1*/
	num = toggleBit(num, 1);
	printf("After toggling bit at position 1: %u\n", num);

	printf("Enter a number: ");
	scanf("%d", &number);

	if (isEven(number))
		printf("%d is even.\n", number);
	else
		printf("%d is odd.\n", number);


	return (0);
}
