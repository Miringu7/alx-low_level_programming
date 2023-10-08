#include <unistd.h>
#include <string.h>

/**
  * main - the main function writes the error message
  * Return: returns 1
  */

int main(void)
{
	const char *message;

	message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, message, strlen(message));
	return (1);
}
