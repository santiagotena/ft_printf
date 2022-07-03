/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexadec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stena-he <stena-he@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 17:08:02 by stena-he          #+#    #+#             */
/*   Updated: 2022/07/03 18:56:50 by stena-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadec_length(unsigned long long int x)
{
	int		index;

	index = 0;
	if (x == 0)
		return (1);
	while (x != 0)
	{
		x /= 16;
		index++;
	}
	return (index);
}

// ft_put_low_hexadec_nb

void	ft_put_low_hexadec_nb(unsigned long long int nb)
{	
	int		out;

	if (nb >= 16)
	{
		ft_put_low_hexadec_nb(nb / 16);
		ft_put_low_hexadec_nb(nb % 16);
	}
	else
	{
		if (nb >= 10 && nb <= 15)
		{
			out = nb - 10 + 'a';
			write(1, &out, 1);
		}
		else
		{
			out = nb + '0';
			write(1, &out, 1);
		}
	}
}

// ft_put_upp_hexadec_nb

void	ft_put_upp_hexadec_nb(unsigned int nb)
{	
	int		out;

	if (nb >= 16)
	{
		ft_put_upp_hexadec_nb(nb / 16);
		ft_put_upp_hexadec_nb(nb % 16);
	}
	else
	{
		if (nb >= 10 && nb <= 15)
		{
			out = nb - 10 + 'A';
			write(1, &out, 1);
		}
		else
		{
			out = nb + '0';
			write(1, &out, 1);
		}
	}
}

int	ft_put_low_hexadec(va_list args)
{
	int unsigned	value;

	value = va_arg(args, unsigned int);
	ft_put_low_hexadec_nb(value);
	return (ft_hexadec_length(value));
}

int	ft_put_upp_hexadec(va_list args)
{
	int unsigned	value;

	value = va_arg(args, unsigned int);
	ft_put_upp_hexadec_nb(value);
	return (ft_hexadec_length(value));
}
