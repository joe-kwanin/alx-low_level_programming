#include <stdio.h>

/**
 * main - prints all possible differernt combination of
 * threee digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, s, d;

	for (a = 48; a < 58; a++)
	{
		for (s = 49; s < 58; s++)
		{
			for (d = 50; d < 58; d++)
			{
				if (d != s && s > a)
				{
					putchar(a);
					putchar(s);
					putchar(d);
					if (a != 55 || s != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
