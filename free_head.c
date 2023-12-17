#include "monty.h"

/**
 * free_head - Frees the memory allocated for the head 
 */

void free_head(void)
{
	if (arguments->head)
		free_stack(arguments->head);

	arguments->head = NULL;
}
