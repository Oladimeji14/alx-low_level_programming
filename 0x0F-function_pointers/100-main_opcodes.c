#include <stdio.h>
#include <stdlib.h>
#include <udis86.h>

/**
  * main - Most hacker
  * @argc: Hexadecimal
  * @argv: Input
  *
  * Return: Output
  */
int main(int argc, char *argv[])
{
	ud_t ud_obj;
	int sal = 0, qad = 0;

	if (argc == 2)
	{
		sal = atoi(argv[1]);

		if (sal < 0)
		{
			printf("Error\n");
			exit(2);
		}

		ud_unit(&ud_obj);
		ud_set_input_buffer(&ud_obj, argv[1], sal);
		ud_set_mode(&ud_obj, 64);
		ud_set_syntax(&ud_obj, UD_SYN_INTEL);

		while (ud_disassemble(&ud_obj))
		{
			printf("\t%s\n", ud_insn_hex(&ud_obj));
		}
	}

	return (0);
}
