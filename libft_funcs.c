#include "ft_printf.h"

// ft_strlen

size_t	ft_strlen(const char *str)
{
	size_t		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter += 1;
	}
	return (counter);
}

// putnbr
void	ft_putchar(int digit)
{
	int		d;

	d = digit + '0';
	write(1, &d, 1);
}

void	recursion(int nb)
{
	if (nb > 9)
	{
		nb = nb / 10;
		recursion(nb);
		ft_putchar(nb % 10);
	}
}

void	ft_putnbr(int nb)
{	
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	recursion(nb);
	ft_putchar(nb % 10);
}

// ft_put_pointer

void	ft_put_pointer(unsigned long long ptr)
{
	write(1, "0x", 2);
	if (ptr == 0)
		write(1, "0", 1);
	else
		ft_put_low_hexadec_nb(ptr);
}
