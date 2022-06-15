#include "simple_shell.h"
/**
 * get_line - Prints "Simpleshell/user@root$" then  wait for a command
 * @isatty_val: no_interactive
 * Return: The read command (line)
 **/
char *get_line(int isatty_val)
{
ssize_t read = 0;
size_t bufer_len = 0;
char *line = NULL;
if (isatty_val == 1)
{
write(STDOUT, "\033[1;31mSimpleshell/user@root$ ", 32);
write(STDOUT, "\033[0m", 4);
}
read = getline(&line, &bufer_len, stdin);
if (read == EOF)
{
if (isatty_val == 1)
{
printf("\n");
}
free(line);
exit(EXIT_SUCCESS);
}
return (line);
}
