void ft_putchar(char c);

void ft_print_abc(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	ft_putchar(' ');
}


int ft_is_different(char a, char b, char c)
{
	if (((a - b) != 0) && ((b - c) != 0) && ((c - a) != 0))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int ft_is_tidy(char a, char b, char c)
{
	if (a < b && b < c )
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


void ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '0';
	c = '0';
	while(a != '9')
	{
		if (ft_is_different(a, b, c) &&  ft_is_tidy(a, b, c))
			ft_print_abc(a, b, c);
		if (c == '9')
		{
			b = b + 1;
			c = '0';
		}
		if (b == '9')
		{
			a = a + 1;
			b = '0';
			c = '0';
		}
		c = c + 1;
	}
}
