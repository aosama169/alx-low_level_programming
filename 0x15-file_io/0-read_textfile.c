#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - read and print from a file on disk
 * @filename: path to the required file
 * @letters: characters to read
 * Return: characters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int rFile;
	char *buff;
	ssize_t bytes, r;

	if (!filename)
		return (0);
	rFile = open(filename, O_RDONLY);
	if (rFile == -1)
	{
		close(rFile);
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		close(rFile);
		return (0);
	}

	bytes = read(rFile, buff, letters);

	if (bytes == -1)
	{
		close(rFile);
		free(buff);
		return (0);
	}

	r = write(STDOUT_FILENO, buff, bytes);

	if (r == -1)
	{
		close(rFile);
		free(buff);
		return (0);
	}
	close(rFile);
	return (bytes);
}
