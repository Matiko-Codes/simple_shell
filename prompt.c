#include "simple_shell.h"
/**
 * prompt_shell - function thats print the prompt
 * @void: whatever
 * Return: none
 */
void prompt_shell(void)
{
write(STDOUT, "\033[1;31mMi_shell/user@root$ ", 32);
write(STDOUT, "\033[0m", 4);
}
