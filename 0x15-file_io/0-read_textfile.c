#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and print it
 * @filename: name of the file
 * @letters: number of the size
 *
 * Return: letter or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int opener;
	int Read;
	int Write;
	char *reader;

	if (filename == NULL)
		return (0);
	opener = open(filename, O_RDONLY);
	if (opener == -1)
		return (0);
	reader = malloc(sizeof(char) * letters + 1);
	if (reader == NULL)
		return (0);
	Read = read(opener, reader, letters);
	if (Read == -1)
		return (0);
	reader[letters] = '\0';

	Write = write(STDOUT_FILENO, reader, Read);
	if (Write == -1)
		return (0);
	close(opener);
	free(reader);
	return (Write);
}
