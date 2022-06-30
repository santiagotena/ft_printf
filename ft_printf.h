/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stena-he <stena-he@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 19:12:49 by stena-he          #+#    #+#             */
/*   Updated: 2022/06/30 21:40:08 by stena-he         ###   ########.fr       */
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

/* ft_printf */

int		ft_printf(const char *, ...);
int		percent_func(va_list args, char str);

/* libft */
size_t	ft_strlen(const char *str);
int		ft_int_length(int x);

/* Extra */
void	ft_putnbr(int nb);
int		ft_unsign_length(unsigned int x);
void	ft_put_unsign_nb(unsigned int nb);

#endif