#include <unistd.h>

void ft_putchar(char c);

void ft_print_alphabet(void)
{
	char b;

	b = 'a';
	while (b != ('z' + 1))
	{
		ft_putchar(b);
		b = b + 1;
	}
	
}
