#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the concatenated string, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = l2 = 0;
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;

	conct = malloc(sizeof(char) * (l1 + l2 + 1));
	if (conct == NULL)
		return (NULL);

	l1 = l2 = 0;
	while (s1[l1] != '\0')
	{
		conct[l1] = s1[l1];
		l1++;
	}

	while (s2[l2] != '\0')
	{
		conct[l1] = s2[l2];
		l1++, l2++;
	}
	conct[l1] = '\0';

	return (conct);
}
