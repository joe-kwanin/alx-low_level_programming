#include <stdio.h>

/**
 * main -prints all possible combinations of two two-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int g, h;

	for (g = 0; g < 100; g++)
	{
		for (h = 0; h < 100; h++)
		{
			if (g < h)
			{
				putchar((g / 10) + 48);
				putchar((g % 10) + 48);
				putchar(' ');
				putchar((h / 10) + 48);
				putchar((h % 10) + 48);
				if (g != 98 || h != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
