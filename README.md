# 31 Days Discipline Game - Week 3 Tasks

Welcome to the third week of the 31 Days Discipline Game! 
In this we will be tackling tasks related to two essential programming concepts: Variadic Functions and Bit Manipulation.

This will be a team effort
[Mawuliah](Jackie)

## Concept: Variadic Functions

### Task 1: Calculate Average using Variadic Function

```c
/**
 * Calculates the average of a variable number of arguments.
 * @param num Number of arguments
 * @return Calculated average
 */
double calculateAverage(int num, ...);

Implement a variadic function that calculates the average of a variable number of arguments.
Utilize the va_arg macro to access the variable arguments.
```

#### how we went through task 1:
* The calculate_average function takes an integer num_args 
representing the number of arguments, followed by a variable number of arguments indicated by ...

* Inside the function, a va_list named args is initialized using va_start to handle the variable arguments.

* The va_arg macro is then used to retrieve each argument from the va_list and add them to the sum.

* Finally, the va_end macro is used to clean up the va_list.

* The main function demonstrates the usage of the calculate_average function with three arguments. The result is then printed to the console

#### Task 2:
Explore the va_start and va_end macros and explain their role in managing variable argument lists.

##### Va_start:
* Purpose: Initializes a va_list object to point to the first variable argument in a function.
* Syntax:
```c
void va_start(va_list ap, last_named_parameter);
```
* Parameters:
        - ap: A va_list object to be initialized.
        - last_named_parameter: The last named parameter in the function's parameter list.
* Usage:
        - va_start must be called before accessing any variable arguments using va_arg.
        - It sets up the va_list to start processing the variable arguments.

* An example:
```c
void my_function(int fixed_arg, ...) {
    va_list args;
    va_start(args, fixed_arg);
    // Now, 'args' is initialized and points to the first variable argument.
    // Use va_arg to access variable arguments.
}
```
##### va_end:
* Purpose: Cleans up the va_list after all variable arguments have been processed.
* Syntax:
```c
void va_end(va_list ap);
```
* Parameter:
	- ap: The va_list object to be cleaned up.
* Usage:
	- va_end should be called once all variable arguments have been accessed using va_arg.
	- It releases any resources associated with the va_list.

* Example usage:
```c
void my_function(int fixed_arg, ...)
{
    va_list args;
    va_start(args, fixed_arg);
    // Use va_arg to access variable arguments.
    va_end(args); // Clean up the va_list when done.
}
```
* In summary, va_start initializes the va_list to begin processing variable arguments, 
and va_end cleans up the va_list when all variable arguments have been accessed. 

* Together with the va_arg macro, these macros provide a standardized way to work with variable argument lists,
allowing functions like printf and scanf to handle a flexible number of arguments based on the format specifiers provided.

Use this to compile your code:
```gcc -Wall -Werror -pedantic variadic_functions.c main.c -o task-1```
