#include "monty.h"

arg_t *arguments = NULL:

/**
 * main: Entry point
 * @argc: The Number of command line arguments
 * @argv: A pointer to an array
 * Description: Print alphabets in lowercase using the 
 * Return: returns 0 (success)
 */

int main(int argc, char **argv)
{
	size_t n = 0;
	validate_arguments(argc);
	initialize_arguments();
	get_stream(argv[1]);

	while (getline(&arguments->line, &n, arguments->stream) != -1)
	{
		printf("%s", arguments->line;
	}
	return (0);
}
