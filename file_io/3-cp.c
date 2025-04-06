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
 * open_files - opens source and destination files
 * @file_from: source filename
 * @file_to: destination filename
 * @fd_from: pointer to source file descriptor
 * @fd_to: pointer to destination file descriptor
 */
void open_files(char *file_from, char *file_to, int *fd_from, int *fd_to)
{
    *fd_from = open(file_from, O_RDONLY);
    if (*fd_from == -1)
        error_file(98, "Error: Can't read from file", file_from);

    *fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (*fd_to == -1)
    {
        close(*fd_from);
        error_file(99, "Error: Can't write to", file_to);
    }
}

/**
 * copy_data - copies data from source to destination
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @file_from: source filename (for error messages)
 * @file_to: destination filename (for error messages)
 */
void copy_data(int fd_from, int fd_to, char *file_from, char *file_to)
{
    int rd, wr;
    char buffer[BUFFER_SIZE];

    rd = read(fd_from, buffer, BUFFER_SIZE);
    while (rd > 0)
    {
        wr = write(fd_to, buffer, rd);
        if (wr == -1 || wr != rd)
        {
            close(fd_from);
            close(fd_to);
            error_file(99, "Error: Can't write to", file_to);
        }
        rd = read(fd_from, buffer, BUFFER_SIZE);
    }

    if (rd == -1)
    {
        close(fd_from);
        close(fd_to);
        error_file(98, "Error: Can't read from file", file_from);
    }
}

/**
 * close_files - closes file descriptors
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 */
void close_files(int fd_from, int fd_to)
{
    if (close(fd_from) == -1)
        error_fd(100, "Error: Can't close fd", fd_from);

    if (close(fd_to) == -1)
        error_fd(100, "Error: Can't close fd", fd_to);
}

/**
 * main - copies content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, or appropriate exit code on failure
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to;

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    open_files(argv[1], argv[2], &fd_from, &fd_to);
    copy_data(fd_from, fd_to, argv[1], argv[2]);
    close_files(fd_from, fd_to);

    return (0);
}
