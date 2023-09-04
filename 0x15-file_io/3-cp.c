#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void close_the_file(int file);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	ssize_t file, filer, filew;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);	
	}
	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}

	do {
		filer = read(file, buffer, 1024);
		if (filer == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			close_the_file(file);
			exit(98);
		}

		filew = open(argv[2], O_WRONLY | O_CREAT | O_APPEND, 0664);
		if (filew == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
			free(buffer);
			close_the_file(file);
			exit(99);
		}

		if (write(filew, buffer, filer) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
			free(buffer);
			close_the_file(file);
			close_the_file(filew);
			exit(99);
		}

		close_the_file(filew);
	} while (filer > 0);

	free(buffer);
	close_the_file(file);
	return (0);
}

/**
 * close_the_file - close a file
 *
 * Return: void
 *
 * @file: the file
 *
*/

void close_the_file(int file)
{
	int x;

	x = close(file);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

