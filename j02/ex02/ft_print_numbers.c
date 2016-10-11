void ft_putchar(char c);

void ft_print_numbers(void)
{
	char a;

	a = '1' - 1 ;
	while (a != ('9' + 1))
	{
		ft_putchar(a);
		a = a + 1;
	}
}
