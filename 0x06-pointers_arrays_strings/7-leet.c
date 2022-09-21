#include "main.h"

/**
 * leet - encodes a string into leetspeek.
 * @s: pointer to input string.
 * Return: Returns pointer to leetspeek string.
 */
char *leet(char *s)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char n[] = "43071";

	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
			if (s[i] == a[j])
				s[i] = n[j / 2];
	}
	return (s);
}
