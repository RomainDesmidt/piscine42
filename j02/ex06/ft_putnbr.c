void ft_putchar(char c);

int ft_count_digit(int nb)
{
	int i;

	i = 0;
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

int ft_nmult(int i)
{
	int j;

	j = 1;
	while (i != 0)
	{
		j = j * 10;
		i--;
	}
	return (j);
}

void ft_putnbr(int nb)
{
	int i;
	int n;
	int k;
	char a;

	a = '0';
	i = ft_count_digit(nb);
	n = ft_nmult(i);
	k = 0;
	while (n != 1)
	{
		n = n / 10;
		k = nb / n;
		a = k + '0';
		ft_putchar(a);
		nb = nb - (n * k);
	}
}
