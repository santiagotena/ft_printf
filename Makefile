# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stena-he <stena-he@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 19:15:00 by stena-he          #+#    #+#              #
#    Updated: 2022/06/30 01:19:46 by stena-he         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC =	ft_printf.c libft_funcs.c
			
OUT_SRC = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OUT_SRC)
	ar -rcs	$(NAME)	$(OUT_SRC)

clean:
	${RM} $(OUT_SRC) $(OUT_BONUS)

fclean: clean
	${RM} $(NAME)

re: fclean all

.PHONY: all clean fclean re