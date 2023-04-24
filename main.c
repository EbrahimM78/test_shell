#include "main.h"

/**
 * main - first function to be called
 *
 * Return: int value
 */

int main(void)
{
char **a = NULL;
int i = 0;

a = spath();

loop(a);

for (i = 0; a[i] != NULL; i++)
{
free(a[i]);
}

return (exit_status);
}
