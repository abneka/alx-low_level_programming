#include "main.h"
#include <stdlib.h>
/**
 * create_file - creates a file.
 * @filename: name of the file to be created
 * @text_content: content of the file created.
 *
 * Return: 1 for success and -1 for failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, Write;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if  (file == -1)
		return (-1);
	if (text_content)
	{
		int i;

		i = 0;
		while (text_content[i])
			i++;
		Write = write(file, text_content, i);
		if (Write != i)
			return (-1);
	}
	close(file);
	return (1);
}
