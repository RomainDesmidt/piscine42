void ft_putchar(char c);

void ft_print_abc(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(',');
	ft_putchar(' ');
}

int ft_is_inferior(char a, char b, char c, char d)
{
	int i;
	int j;

	i = ((a - 48) * 10) + (b - 48);
	j = ((c - 48) * 10) + (d - 48);
	if (i < j)
		return (1);
	else
		return (0);
	
}

void ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	while(a != ('9' + 1))
	{
		if(ft_is_inferior(a, b, c, d))
			ft_print_abc(a, b, c, d);
		d = d + 1;
		if (d == ('9' + 1))
		{
			c = c + 1;
			d = '0' ;
		}
		if (c == ('9' + 1) )
		{
			b = b + 1;
			c = '0';
		}
		if (b == '9')
		{
			a = a + 1;
			b = '0';
		}
	}
}
