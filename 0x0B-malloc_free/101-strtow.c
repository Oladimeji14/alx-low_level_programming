#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - Locates the index marking.
 * @str: Input.
 *
 * Return: Output.
 */
int word_len(char *str)
{
	int i = 0, l = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		l++;
		i++;
	}

	return (l);
}

/**
 * count_words - Counts the number of words.
 * @str: input.
 *
 * Return: Output.
 */
int count_words(char *str)
{
	int i = 0, w = 0, l = 0;

	for (i = 0; *(str + i); i++)
		l++;

	for (i = 0; i < l; i++)
	{
		if (*(str + i) != ' ')
		{
			w++;
			i += w_l(str + i);
		}
	}

	return (w);
}

/**
 * strtow - Splits a string into words.
 * @str: Input
 *
 * Return: Output
 */
char **strtow(char *str)
{
	char **s;
	int i = 0, w, j, let, k;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	w = count_w(str);
	if (w == 0)
		return (NULL);

	s = malloc(sizeof(char *) * (words + 1));
	if (s == NULL)
		return (NULL);

	for (j = 0; j < w; j++)
	{
		while (str[i] == ' ')
			i++;

		let = w_l(str + i);

		s[j] = malloc(sizeof(char) * (let + 1));

		if (s[j] == NULL)
		{
			for (; j >= 0; j--)
				free(s[j]);

			free(s);
			return (NULL);
		}

		for (k = 0; k < let; k++)
			s[j][k] = str[i++];

		s[j][k] = '\0';
	}
	s[j] = NULL;

	return (s);
}
