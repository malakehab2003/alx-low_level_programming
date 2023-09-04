#include "main.h"

/**
 * append_text_to_file - append text
 *
 * Return: 1 if success
 *
 * @filename: name of the file
 *
 * @text_content: the content of the file
*/

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t file, filew;
	int len = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != 0)
			len++;
	}
	filew = write(file, text_content, len);
	if (filew == -1)
		return (-1);
	close(file);
	return (filew);
}
