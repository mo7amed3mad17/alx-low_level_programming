#include "main.h"

/**
  * create_file - The function to be built
  * @filename: The file name.
  * @text_content: The string to be write
  * Return: integer
*/

int create_file(const char *filename, char *text_content)
{
	int file;
	int wr;
	int i;

	if (!filename)
	return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
	return (-1);

	if (!text_content)
	text_content = "";

	for (i = 0; text_content[i];)
	{
		i++;
	}

	wr = write(file, text_content, i);
	if (wr == -1)
	return (-1);

	close(file);
	return (1);
}
