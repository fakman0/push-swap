# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fakman <fakman@student.42kocaeli.com.tr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/24 19:24:15 by fakman            #+#    #+#              #
#    Updated: 2023/02/24 19:24:15 by fakman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a

CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror

FILES	:= $(shell find . -type f ! -name "ft_lst*.c" -name "ft_*.c")
OBJ		:= $(FILES:%.c=%.o)

BSRC	:= $(shell find . -type f -name "ft_lst*.c")
B_OBJ	:= $(BSRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(B_OBJ)
	ar -rcs $(NAME) $(OBJ) $(B_OBJ)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re