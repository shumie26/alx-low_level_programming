#include "main.h"

/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: argument count
 * @av: argument vector
 *
 * - Returns NULL if ac == 0 or av == NULL
 * - Returns a pointer to a new string, or NULL if it fails
 * - Each argument should be followed by a \n in the new string
 *
 * Return: a new string or NULL when it fails
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, l = 0, j, w_len = 0;

	for (i = 0; i < ac; i++, w_len++)
		w_len += strlen(av[i]);

	if (ac == 0 || av == NULL)
		return (NULL);

	str = malloc(1 + w_len * sizeof(char));
	if (str == NULL)
	{
		free(str);
		return (0);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, l++)
		{
			str[l] = av[i][j];
		}
		str[l] = '\n';
		l++;
	}
	str[l] = '\0';

	return (str);
}
