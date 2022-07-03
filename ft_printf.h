/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stena-he <stena-he@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 19:12:49 by stena-he          #+#    #+#             */
/*   Updated: 2022/07/03 17:20:27 by stena-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* Libraries */
// variadic functions
# include <stdarg.h>
// write
# include <unistd.h>
// printf
# include <stdio.h>
// malloc
# include <stdlib.h>

/* Ft_printf */
int		ft_printf(const char *, ...);
int		percent_func(va_list args, char str);

/* Libft */
size_t	ft_strlen(const char *str);

/* Flag Functions */
// integers -i
int		ft_put_int(va_list args);
void	ft_putnbr(int nb);
int		ft_int_length(int x);
// unsigned -u
void	ft_put_unsign_nb(unsigned int nb);
int		ft_unsign_length(unsigned int x);
// hexadecimals -x -X
int		ft_put_low_hexadec(va_list args);
void	ft_put_low_hexadec_nb(unsigned long long int nb);
int		ft_put_upp_hexadec(va_list args);
void	ft_put_upp_hexadec_nb(unsigned int nb);
int		ft_hexadec_length(unsigned long long x);
// pointers -p
void	ft_put_pointer(unsigned long long ptr);

#endif