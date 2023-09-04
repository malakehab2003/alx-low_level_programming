#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdio.h>

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
	ssize_t file, filer, filew;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	filer = read(buffer, 1, letters, file);
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
