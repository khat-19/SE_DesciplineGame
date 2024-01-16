#include "variadic_functions.h"

/**
 * calculate_average - Calculate the average of a variable number of arguments.
 * @num_args: Number of arguments.
 * @...: Variable number of arguments.
 *
 * Return: Average of the arguments.
 */
double calculate_average(int num_args, ...)
{       
        va_list args;
        double sum = 0.0;
        int i;
        
        /* Initialize the va_list to handle the variable arguments */
        va_start(args, num_args);
        
        /* Summing up all the arguments */
        for (i = 0; i < num_args; ++i)
		sum += va_arg(args, double);

	/* Clean up the va_list */
	va_end(args);

	/* Calculate the average */
	if (num_args > 0)
	{
		return (sum / num_args);
	}
	else
	{
		/* Avoid division by zero */
		fprintf(stderr, "Error: Division by zero\n");
		return (0.0);
	}
}
