/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stena-he <stena-he@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:54:32 by stena-he          #+#    #+#             */
/*   Updated: 2022/07/03 16:54:33 by stena-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_int_length(int x)
{
	int		index;

	index = 0;
	if (x < 0)
		index++;
	if (x == 0)
		return (1);
	while (x != 0)
	{
		x /= 10;
		index++;
	}
	return (index);
}

int	ft_put_int(va_list args)
{
	int		value;
		
	value = va_arg(args, int);
	ft_putnbr(value);
	return (ft_int_length(value));
}