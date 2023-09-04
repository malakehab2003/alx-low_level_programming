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
	ssize_t file, filer, filew, file2;
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
	filer = read(file,buffer, 1024);
	file2 = open(argv[2], O_WRONLY | O_CREATE | O_TRUNC, 0664);
	do{
		if (file == -1 || filer == _1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		filew = write(file2, buffer, filer);
		if (file2 == -1 || filew == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
			exit(99);
		}
		filer = read(from, buffer, 1024);
		filew = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buffer);
	close_the_file(filer);
	close_the_file(filew);
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
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
