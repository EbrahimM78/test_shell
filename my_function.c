#include "shell.h"

/**
 * my_function - A sample function definition
 *
 * This function performs a simple operation on the parameters.
 *
 * @param1: An integer parameter
 * @param2: A character pointer parameter
 *
 * Return: A float value
 */
float my_function(int param1, char *param2)
{
float result;

/* Do some operation on the parameters */
result = (float) param1 / strlen(param2);
return (result);
}

/**
 * main - Entry point of the program
 *
 * This program calls the my_function() function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
float result;
result = my_function(10, "Hello, Betty!");
printf("Result: %f\n", result);
return (0);
}
