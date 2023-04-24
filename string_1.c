#include "main.h"

/**
 * _strcmp - | starts the file
 * @s1: - | var
 * @s2: - | var
 * Return: - | ends the file
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}

if (*s1 == *s2)
{
return (0);
}
else
{
return (*s1 - *s2);
}
}

/**
 * _strdup - | starts the file
 * @str: - | var
 * Return: - |
 */

char *_strdup(char *str)
{
char *c = NULL;
int i;

if (str == NULL)
return (NULL);

c = malloc(_strlen(str) + 1);
if (c == NULL)
return (NULL);
for (i = 0; i < _strlen(str); i++)
{
c[i] = str[i];
}

c[i] = '\0';

return (y);
}

/**
 * _strlen - | starts the file
 * @s: - | var
 * Return: - |
 */

int _strlen(char *s)
{
int len = 0;

while (*s)
{
s++;
len++;
}

return (len);
}

/**
 * getpath - | gets path string
 *
 * Return: char *
 */

char *getpath()
{
int i = 0;
int x = 0;
int flag = 0;
char *path = NULL;
char *apath = NULL;
char *place = "PATH=";

for (i = 0; environ[i] != NULL; i++)
{
for (x = 0; x < 5; x++)
{
if ((_strchr(environ[i], place[x], x) == 1))
{
flag = flag + 1;

if (flag == 5)
{
path = environ[i];
}
}
else
{
break;
}
}

if (path != NULL)
{
path = path + 5;
apath = path;
break;
}

}

return (apath);

}

/**
 * _strstr - | starts the file
 * @hay: - | var
 * @needle: - | var
 * Return: - | ends the file
 */

char *_strstr(char *hay, char *needle)
{

unsigned int x = 0;
unsigned int y = 0;

while (hay[x])
{

while (needle[y] && hay[x] == needle[0])
{

if (hay[x + y] == needle[y])
{
y++;
}
else
{
break;
}
}

if (needle[y])
{
x++;
y = 0;
}
else
{
return (hay + x);
}
}
return (0);
}
