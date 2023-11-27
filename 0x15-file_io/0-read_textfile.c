#include "main.h"

/**
  * read_textfile - function that reads a text file and prints
  * @filename: Input
  * @letters: Input
  *
  * Return: 0
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int sal, qad;
	char *muf = malloc(sizeof(char *) * letters);

	if (!muf)
		return (0);

	if (!filename)
		return (0);

	sal = open(filename, O_RDONLY, 0600);
	if (sal == -1)
		return (0);

	qad = read(sal, muf, letters);
	write(STDOUT_FILENO, muf, qad);

	free(muf);
	close(sal);
	return (qad);
}
