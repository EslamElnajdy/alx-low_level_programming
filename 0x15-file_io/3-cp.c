#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main (int argc, char *argv[])
{
    char buffer[1024];
    ssize_t n;
    int fd_from;
    int fd_to;
    /*check the number of argument*/
    if (argc != 3)
    {
        dprintf (STDERR_FILENO,"Usage: cp file_from file_to\n");
        exit(97);
    }

    /*open the file*/
    fd_from = open (argv[1], O_RDONLY);
    if (fd_from < 0)
    {
        dprintf (STDERR_FILENO,"Error: Cannot read from file %s\n", argv[1]);
        exit(98);
    }
    fd_to = open (argv[2], O_WRONLY|O_CREAT|O_TRUNC, 0644);
    if (fd_to < 0)
    {
        dprintf (STDERR_FILENO,"Error: Cannot write to file %s\n", argv[2]);
        exit(99);
    }
    /*read the file*/

    while ((n = read (fd_from, buffer, 1024)) > 0)
    {
        write (fd_to, buffer, n);
    }
    if (n < 0)
    {
        dprintf (STDERR_FILENO,"Error: Cannot read from file %s\n", argv[1]);
        exit(98);
    }
    /*close the file*/
    close (fd_from);
    close (fd_to);
    return 0;
}
