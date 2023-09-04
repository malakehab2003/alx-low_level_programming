#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

/**
 * read_textfile - read textfile
 *
 * Return: size of the list
 *
 * @letters: the number of the letters to read
 *
 * @filename: the name of the file to read
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file;
	ssize_t filer, filew;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}
	filer = read(file, buffer, letters);
	if (filer == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}
	filew = write(STDOUT_FILENO, buffer, filer);

	free(buffer);
	close(file);
	return (filew);

}
