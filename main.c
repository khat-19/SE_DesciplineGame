#include "variadic_functions.h"

/*
 * main - entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	double result;

	/* Example usage */
	result = calculate_average(3, 5.0, 10.0, 15.0);
	printf("Average: %f\n", result);

	return (0);
}
