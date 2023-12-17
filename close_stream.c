#include "monty.h"

/**
 * close_stream - closes the file stream and set it to NULL
 */

void close_stream(void)
{
	if (arguments->stream == NULL)
		return;

	fclose(arguments->stream);
	arguments->stream = NULL;
}
