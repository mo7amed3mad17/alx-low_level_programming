#include "main.h"

/**
  * Check_file - The function to be built
  * @des: The file descriptor to be opened
  * @name: The file name
  * @mode: the mode
  * @fd: The file descriptor
  * Return: void
 */
void check_file(int des, int fd, char *name, char mode)
{
	if (mode == 'c' && des == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

	else if (mode == 'o' && des == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name);
		exit(98);
	}

	else if (mode == 'w' && des == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name);
		exit(99);
	}
}

/**
  * main - The main function
  * @argc: The number of arguments
  * @argv: Array of Arguments
  * Return: 0
 */

int main(int argc, char *argv[])
{
	unsigned int mode = S_IRGRP | S_IWUSR | S_IRUSR | S_IROTH | S_IWGRP;
	char buff[1024];
	int src, dest, rd = 1024, wrt, c_src, c_dest;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}

	src = open(argv[1], O_RDONLY);
	check_file(src, -1, argv[1], 'o');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_file(dest, -1, argv[2], 'w');
	while (rd == 1024)
	{
		rd = read(src, buff, sizeof(buff));

		if (rd == -1)
		check_file(-1, -1, argv[1], 'o');
		wrt = write(dest, buff, rd);
		if (wrt == -1)
		check_file(-1, -1, argv[2], 'w');
	}

	c_src = close(src);
	check_file(c_src, src, NULL, 'c');
	c_dest = close(dest);
	check_file(c_dest, dest, NULL, 'c');
	return (0);
}
