#include "monty.h"

/**
 * imvalid_instruction - Handles an unknown instruction erro
 */

void invalid_instruction(void)
{
	dprintf(2, "L%d: unknown instruction %s\n", 
			argument->line_number, argument->tokens[0] 
	close_stream();
	free_tokens();
	free_arguments();
	exit(EXIT_FAILURE);
}
