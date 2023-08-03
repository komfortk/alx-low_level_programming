#include "main.h"
/**
 * rot13 - encode a string using ROT13 algorithm
 * @k: pointer to input string
 *
 * Return: pointer to the encoded string
 */
char *rot13(char *k)
{
	int i, j;
	char lett[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; k[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (k[i] == lett[j])
			{
				k[i] = rot13[j];
				break;
			}
		}
	}
	return (k);
}
