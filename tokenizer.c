#include "holberton.h"
/**
 *split_line - split string
 * @str: user input
 * Return:array of string.
 */

char **split_line(char *str)
{
	char **tokens;
	char *token;
	unsigned int i;

	tokens = malloc(sizeof(char) * BUFFER);
	if (tokens == NULL)
	{
		errors(3);
		exit(EXIT_FAILURE);
	}

	token = strtok(str, "\n\t\r ");

	i = 0;
	while (token != NULL)
	{
		tokens[i] = token;
		token = strtok(NULL, "\n\t\r ");
		i++;
	}

	tokens[i] = NULL;

	return (tokens);
}
