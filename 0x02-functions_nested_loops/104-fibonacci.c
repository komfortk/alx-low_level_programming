#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Description: Starts with 1 and 2, prints in comma-separated format
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int i;
	unsigned long int fir = 1;
	unsigned long int sec = 2;
	unsigned long int l = 1000000000;
	unsigned long int fir1;
	unsigned long int fir2;
	unsigned long int sec1;
	unsigned long int sec2;

	printf("%lu", fir);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", sec);
		sec += fir;
		fir = sec - fir;
	}

	fir1 = (fir / l);
	fir2 = (fir % l);
	sec1 = (sec / l);
	sec2 = (sec % l);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", sec1 + (sec2 / l));
		printf("%lu", sec2 % l);
		sec1 = sec1 + fir1;
		fir1 = sec1 - fir1;
		sec2 = sec2 + fir2;
		fir2 = sec2 - fir2;
	}
	printf("\n");
	return (0);
}
