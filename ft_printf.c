/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stena-he <stena-he@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 21:11:03 by stena-he          #+#    #+#             */
/*   Updated: 2022/06/29 18:11:19 by stena-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	int		count;
	int		index;
	va_list args;

	count = 0;
	index = 0;
	va_start(args, str);
	while (str[index])
	{
		if (str[index] == '%')
		{
			index++;
			if (str[index] == '\0')
				return (0);
			count = count + percent_func(args, str[index]);
		}
		else
		{
			write(1, &str[index], 1);
			count++;
		}
		index++;
	}
	va_end(args);
	// printf("%d", count);
	return(count);
}

int		percent_func(va_list args, char str)
{
	if (str == 'c')
	{
		int		value;
			
		value = va_arg(args, int);
		write(1, &value, 1);	
		return (1);	
	}
	else if (str == 's')
		return (0);
	else if (str == 'p')
		return (0);
	else if (str == 'd')
		return (0);
	else if (str == 'i')
	{
		int		value;
		
		value = va_arg(args, int);
		write(1, ft_itoa(value), ft_int_length(value));
		return (ft_int_length(value));
	}
		
	else if (str == 'u')
		return (0);
	else if (str == 'x')
		return (0);
	else if (str == 'X')
		return (0);
	else if (str == '%')
	{
		write(1, &str, 1);
		return (1);
	}
	return (0);
}

int		main(void)
{
	ft_printf("Santiago\n");
	ft_printf("Santi%%Tena\n");
	ft_printf("Sant%c%c\n", 'i', 'a');
	printf("%i\n", 534);
	// write(1, "523", 3);
	return (0);
}