# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bolaleka <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/19 12:06:35 by bolaleka          #+#    #+#              #
#    Updated: 2019/09/11 13:46:03 by bolaleka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

FLAGS = -Wall -Wextra -Werror -g

SRC =	main.c \
	folder_content.c \
	display_error.c \
	sort_folder.c \
	disp_long_ls.c \
	get_perm.c \
	print_stat.c \
	get_option.c \
	valid_lst.c  

OBJ	= $(SRC:.c=.o)

LIB 	= libft/libft.a

NAME = ft_ls

all:		$(NAME)

$(NAME):	$(OBJ)
	$(MAKE) -C ./libft
	$(CC) -o $(NAME) $(FLAGS) $(OBJ) $(LIB)

clean:
	rm -f $(OBJ)
	$(MAKE) -C ./libft clean

fclean:	clean
	rm -f $(NAME)
	$(MAKE) -C ./libft fclean

re: fclean all

.PHONY: all clean fclean re
