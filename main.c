#include "shell.h"

/**
 * main - Entry point of the Simple Shell.
 * @argc: Argument count (unused).
 * @argv: Argument vector (unused).
 *
 * Return: 0 on normal termination.
 */
int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	setup_signals();
	shell_loop();

	return (0);
}
