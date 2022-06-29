/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stena-he <stena-he@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 19:12:49 by stena-he          #+#    #+#             */
/*   Updated: 2022/06/28 23:41:07 by stena-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// Variadic library
# include <stdarg.h>
// Write function
# include <unistd.h>
// Printf
# include <stdio.h>

int		ft_printf(const char *, ...);
int		percent_func(va_list args, char str);
size_t	ft_strlen(const char *str);

#endif