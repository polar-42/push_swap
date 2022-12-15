# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/27 11:57:23 by fle-tolg          #+#    #+#              #
#    Updated: 2022/11/15 13:36:45 by fle-tolg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED = \033[0;31m
GREEN = \033[0;32m
BLUE = \033[0;34m
END = \033[0m

NAME = push_swap

CFLAGS = -Wextra -Wall -Werror

LIBFT = ./libft/libft.a

LIBFT_DIR = ./libft/ --no-print-directory

CC = clang -g

RM = rm -f

OBJ = $(SRC:.c=.o)

SRC = main.c\
	sources/push_swap.c\
	sources/to_r_rr.c\
	sources/algo3.c\
	sources/algo5.c\
	sources/sort.c\
	sources/sort_utils.c\
	sources/sort_utils_2.c\
	sources/db_error.c\
	sources/db_test_push_swap.c\
	sources/ft_s.c\
	sources/ft_p.c\
	sources/ft_r.c\
	sources/ft_rr.c\
	sources/ft_atoi_long.c\
	sources/ft_find.c\
	sources/join_arg_utils.c

%.o: %.c
	@$(CC) $(CFLAGS) -c -o $@ $<

$(NAME) : ${OBJ}
	@$(MAKE) -C $(LIBFT_DIR)
	@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o push_swap
	@echo "${GREEN}$(NAME) compilated with success"

all : $(NAME)

clean :
	@$(MAKE) -C $(LIBFT_DIR) clean
	@$(RM) $(OBJ)
	@echo "$(NAME) clean"

fclean :
	@$(MAKE) -C $(LIBFT_DIR) fclean
	@$(RM) $(OBJ) $(NAME)
	@echo "${RED}$(NAME) fclean"

norme :
	norminette libft
	norminette sources
	norminette includes
	norminette main.c

re :	fclean all

.PHONY :
	all clean fclean norme re
