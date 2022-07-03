/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stena-he <stena-he@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:30:20 by stena-he          #+#    #+#             */
/*   Updated: 2022/07/03 18:30:52 by stena-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
