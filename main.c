#include "variadic_functions.h"

/*
 * main - entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	double result;
	char *result1 = concatenate_strings("sdf", "Value: ", 42, 3.14);

	/* Example usage */
	result = calculate_average(3, 5.0, 10.0, 15.0);
	printf("Average: %f\n", result);

	printf("Concatenated String: %s\n", result1);

	/*free the allocated memory*/
	free(result1);

	return (0);
}
