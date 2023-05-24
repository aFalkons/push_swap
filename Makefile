# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/22 05:41:09 by afalconi          #+#    #+#              #
#    Updated: 2023/05/24 21:04:52 by afalconi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CFILES =	main.c \
			moves/push.c \
			moves/reverse.c \
			moves/rotate.c \
			moves/swap.c \
			utils.c \
			setup.c
OBJ = $(CFILES:.c=.o)

CC = gcc
FLAGS = -g -Wall -Wextra -Werror
RM = rm -rf

NAME = push_swap

all : $(NAME)

$(NAME) : $(OBJ)
	cp moves/moves.h ./push_swap
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)


bonus: $(NAME)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
