#include "main.h"

/**
 * create_file - create a file
 *
 * Return: 1 if success
 *
 * @filename: name of the file
 * 
 * @text_content: the content of the file
*/

int create_file(const char *filename, char *text_content)
{
        ssize_t file;
        int len = 0, filew;

        if (filename == NULL)
                return (-1);
        file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
        if (file == -1)
                return (-1);
        if (text_content != NULL)
        {
                while (text_content[len] != 0)
                {
                        len++;
                }
        }

        filew = write(file, text_content, len)

        if (filew == -1)
                return (-1);

        close(file);
        return (1);


}
