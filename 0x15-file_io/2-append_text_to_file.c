#include "main.h"

/**
  * append_text_to_file - The function to be built
  * @filename: The file name
  * @text_content: The file content
  * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int wr;
	int i;

	if (!filename)
	return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
	return (-1);

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
