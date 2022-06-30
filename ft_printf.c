/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stena-he <stena-he@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 21:11:03 by stena-he          #+#    #+#             */
/*   Updated: 2022/06/30 22:02:18 by stena-he         ###   ########.fr       */
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
	// printf("%d\n", count);
	return(count);
}

int		percent_func(va_list args, char flag)
{
	if (flag == 'c')
	{
		int		value;
			
		value = va_arg(args, int);
		write(1, &value, 1);	
		return (1);	
	}
	else if (flag == 's')
	{
		int		index;
		char	*value;
		
		
		index = 0;
		value = va_arg(args, char *);
		if (value == NULL)
		{
			write(1, "(null)", 6);
			return (6);
		}
		while (value[index])
		{
			write(1, &value[index], 1);
			index++;	
		}
		return (ft_strlen(value));
	}
	else if (flag == 'p')
		return (0);
	else if (flag == 'i' || flag == 'd')
	{
		int		value;
		
		value = va_arg(args, int);
		ft_putnbr(value);
		return (ft_int_length(value));
	}
		
	else if (flag == 'u')
	{
		int unsigned	value;
		
		value = va_arg(args, unsigned int);
		ft_put_unsign_nb(value);
		return (ft_unsign_length(value));
	}
	else if (flag == 'x')
		return (0);
	else if (flag == 'X')
		return (0);
	else if (flag == '%')
	{
		write(1, &flag, 1);
		return (1);
	}
	return (0);
}

// int		main(void)
// {
// 	ft_printf("Santiago\n");
// 	ft_printf("Santi%%Tena\n");
// 	ft_printf("Sant%c%c\n", 'i', 'a');
// 	ft_printf("%i %i\n", 534, 123);
// 	ft_printf("Santiago %s\n", "Tena");
	
// 	return (0);
// }

int		main(void)
{
	int a;
	int b;

	a = printf(" %x ", 10);
	printf("%c", '\n');
	b = ft_printf(" %x ", 10);
	printf("%c", '\n');
	printf("%d, %d\n", a, b);
	
	return (0);
}