#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Prints an error message to stderr and exits the program
 * @code: The exit code to return
 * @message: The error message to display
 * @detail: Additional details about the error
 */
void error_exit(int code, const char *message, const char *detail)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, detail);
	exit(code);
}

/**
 * main - Copies the content of one file to another
 * @argc: The number of arguments passed to the program
 * @argv: The array of argument strings
 *
 * Return: 0 on success, or the appropriate exit code on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd, wr;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to", "");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to", argv[2]);

	while ((rd = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		wr = write(fd_to, buffer, rd);
		if (wr == -1 || wr != rd)
			error_exit(99, "Error: Can't write to", argv[2]);
	}

	if (rd == -1)
		error_exit(98, "Error: Can't read from file", argv[1]);

	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd", argv[1]);

	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd", argv[2]);
	return (0);
}
