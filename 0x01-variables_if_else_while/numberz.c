#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
/*int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}

int main(void)
{
	int a;

	for (a = 0 ; a < 10 ; a++)
	{
		putchar('0'+a);
	}
	putchar('\n');
	return (0);
}

int main(void)
{
  int i;
  i=48;
  while (i<=57)
  {
    putchar(i);
    i+=1;
  }
  putchar('\n');
  return (0);
}

int main(void)
{
	char i;
	i='z';
		
	while (i>='a')
	{
		putchar(i);
		i-=1;
	}
	putchar('\n');
	return (0);
}

int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	putchar(l);

	putchar('\n');

	return (0);
}*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, j;
  i='a'; j='z';
  while (j>=i)
  {
    putchar(j);
    j-=1;
  }
    putchar('\n');
return (0);
}
