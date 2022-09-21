#include "main.h"

/**
 * rot13 - encrypts code
 * @s: string to encrypt
 * Return: char value
 */
char *rot13(char *s)
{
	char ap[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char ar[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int i,j;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (j = 0; ap[j] != '\0'; j++)
		{
			if (s[i] == ap[j])
			{
				s[i] = ar[j];
				break;
			}
		}
	}
	return (s);
}
