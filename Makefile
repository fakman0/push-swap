# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fakman <fakman@student.42kocaeli.com.tr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/19 08:19:56 by fakman            #+#    #+#              #
#    Updated: 2023/03/19 08:19:57 by fakman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
PUSH_SWAP_FILES = $(shell find . -name "*.c")

all: 
	@make -C ./libft
	@mv ./libft/libft.a main
	@gcc -Wall -Wextra -Werror $(PUSH_SWAP_FILES) ./main/libft.a -o $(NAME)
	@echo "✅"

clean:
	@rm -rf ./libft/*.o
	@rm -rf ./main/libft.a
	@echo "🗑️"

fclean: clean
	@rm -rf push_swap

re: fclean all

norm:
	norminette