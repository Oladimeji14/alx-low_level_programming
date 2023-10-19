
#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int qad = 0;

	while (str[qad])
	{
		while (!(str[qad] >= 'a' && str[qad] <= 'z'))
			qad++;

		if (str[qad - 1] == ' ' ||
		    str[qad - 1] == '\t' ||
		    str[qad - 1] == '\n' ||
		    str[qad - 1] == ',' ||
		    str[qad - 1] == ';' ||
		    str[qad - 1] == '.' ||
		    str[qad - 1] == '!' ||
		    str[qad - 1] == '?' ||
		    str[qad - 1] == '"' ||
		    str[qad - 1] == '(' ||
		    str[qad - 1] == ')' ||
		    str[qad - 1] == '{' ||
		    str[qad - 1] == '}' ||
		    qad == 0)
			str[qad] -= 32;

		qad++;
	}

	return (str);
}
