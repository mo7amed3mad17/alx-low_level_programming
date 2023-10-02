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
	printf("%s\n", argv[argc - 1]);
	printf("%d\n", argc);
	return (0);
}
