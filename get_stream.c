#include "monty.h"

/**
 * getting_stream_failed - Handle the error when reading a file
 * @fileName: The name of the file that failed to open.
 */

void getting_stream_failed(char *fileName)
{
	dprintf(stderr, "Error: can't open file %s\n", fileName);
	free_arguments();
	exit(EXIT_FAILURE);
}

/**
 * get_stream - gets the stream for reading from the specified file.
 * @fileName: Name of the file to open.
 */

void get_stream(char *fileName)
{
	int fd;

	fd = open(fileName, 0_RDONLY);
	if (fd == -1)
		getting_stream_failed(fileName);

	arguments->stream = fdopen(fd, "r");
	if (arguments->stream == NULL)
	{
		close(fd);
		getting_stream_failed(fileName);
	}
}
