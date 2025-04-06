#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * error_file - prints error messages and exits
 * @exit_code: exit code
 * @message: error message to print
 * @filename: name of the file
 */
void error_file(int exit_code, const char *message, const char *filename)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, filename);
	exit(exit_code);
}

/**
 * error_fd - prints error message for file descriptor
 * @exit_code: exit code
 * @message: error message to print
 * @fd: file descriptor value
 */
void error_fd(int exit_code, const char *message, int fd)
{
	dprintf(STDERR_FILENO, "%s %d\n", message, fd);
	exit(exit_code);
}

/**
 * main - copies content from one file to another
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, or appropriate exit code on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd, wr;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_file(98, "Error: Can't read from file", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_file(99, "Error: Can't write to", argv[2]);

	while ((rd = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		wr = write(fd_to, buffer, rd);
		if (wr == -1 || wr != rd)
			error_file(99, "Error: Can't write to", argv[2]);
	}

	if (rd == -1)
		error_file(98, "Error: Can't read from file", argv[1]);

	if (close(fd_from) == -1)
		error_fd(100, "Error: Can't close fd", fd_from);

	if (close(fd_to) == -1)
		error_fd(100, "Error: Can't close fd", fd_to);

	return (0);
}
