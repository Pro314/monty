#include "monty.h"

/**
 * validate_arguments - checks the number of command-line arguments
 * @argc: The number of command-line arguments
 */

void validate_arguments(int argc)
{
	if (argc == 2)
		return;

	dprintf(2, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
