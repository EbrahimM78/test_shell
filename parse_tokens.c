#include "main.h"

/**
 * parse - the tokenizer
 * @s: path
 * Return: char **
 */

char **parse(char *s)
{
int i;
int amount = 1;
char *two = NULL;
char *copy_main = NULL;
char *copy_2 = NULL;
char **string = NULL;
char *arg = NULL;

const char *del = ":";

i = 0;

copy_main = _strdup(s);
copy_2 = _strdup(s);

for (arg = strtok(copy_main, del); arg != NULL; arg = strtok(NULL, del))
{
amount++;
}

free(copy_main);
copy = NULL;

string = malloc(sizeof(char *) * (amount));
if (string == NULL)
{
exit(errno);
}
for (two = strtok(copy_2, del); two != NULL; two = strtok(NULL, del))
{
string[i] = _strdup(two);
i++;
}

string[i] = NULL;
two = NULL;
free(copy_2);
copy_2 = NULL;

return (string);
}
