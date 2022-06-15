#include "simple_shell.h"
/**
 * _exit_function - print function
 * @void: the exit
 * Return: none
 */
void _exit_function(void)
{
kill(getpid(), SIGTERM);
}
