#include "main.h"

/**
  * read_textfile - The function to be built
  * @filename: The desired file
  * @letters: The number of the file letters
  * Return: The number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t rd, wr;
	char *buff;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	return (0);

	buff = malloc(letters);
	if (buff == NULL)
	{
		close(file);
		return (0);
	}

	rd = read(file, buff, letters);
	close(file);
	if  (rd == -1)
	{
		free(buff);
		return (0);
	}

	wr = write(STDOUT_FILENO, buff, rd);
	free(buff);

	if (rd != wr)
	return (0);

	return (wr);
}
