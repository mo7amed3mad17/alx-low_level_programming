#include <stdio.h>
#include <stdlib.h>
/**
  * main - Entry Point
  * @argc: num of args
  * @argv: strs of args
  * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", atoi(argv[argc - 1]));
	return (0);
}
