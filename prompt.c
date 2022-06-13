#include "shell.h"
/**
 * prompt_shell - function to print the prompt
 * @void: wherever
 * Return: none
 */
void prompt_shell(void)
{
	write(STDOUT, "\035[1;35mSimpleshell/user@root$ ", 35);
	write(STDOUT, "\035[0m", 4);
}
