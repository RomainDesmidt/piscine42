#include <stdlib.h>

void ft_putchar(char c);

void ft_print_reverse_alphabet(void)
{
	char a;

	a = 'z';
	while (a != ('a' - 1))
	{
		ft_putchar(a);
		a = a - 1;
	}
}
