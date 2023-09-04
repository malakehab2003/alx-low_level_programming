#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

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
	if (file == -1 || filer == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}
	file2 = open(argv[2], O_WRONLY | O_CREATE | O_TRUNC, 0664);
	do{
	filew = write(file2, buffer, filer);
	if (file2 == -1 || filew == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);
	}

	return (0);
}
