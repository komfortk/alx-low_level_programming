#include "main.h"
/**
 * *leet - function that encodes a string into 1337
 * @k: the pointer to a string
 * Letters a and A are replaced by 4
 * Letters e and E are replaced by 3
 * Letters o and O are replaced by 0
 * Letters t and T are replaced by 7
 * Letters l and L are replaced by 1
 * Return: pointer to the string
 */
char *leet(char *k)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; k[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (k[i] == s1[j])
			{
				k[i] = s2[j];
				break;
			}
		}
	}
	return (k);
}
