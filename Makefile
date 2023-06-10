# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/22 05:41:09 by afalconi          #+#    #+#              #
#    Updated: 2023/06/10 17:30:50 by afalconi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CFILES =	main.c \
			moves/push.c \
			moves/reverse.c \
			moves/rotate.c \
			moves/swap.c \
			utils.c \
			setup.c \
			algoritm/inizialsort.c \
			algoritm/realswap.c \
			utils2.c \
			algoritm/reorder.c
CFILESB =	check/checkermain.c \
			check/setup.c \
			check/gnl/get_next_line.c \
			check/gnl/get_next_line_utils.c \
			check/utils.c \
			check/utils2.c \

OBJ = $(CFILES:.c=.o)

BOBJ = $(CFILESB:.c=.o)

CC = @ gcc
FLAGS = -g -Wall -Wextra -Werror
RM = rm -rf

NAME = push_swap
NAMEB = checker

all : $(NAME)

$(NAME) : $(OBJ)
	 $(CC) $(FLAGS) $(OBJ) -o $(NAME)

bonus: $(NAMEB)

$(NAMEB) : $(BOBJ)
	 $(CC) $(FLAGS) $(BOBJ) -o $(NAMEB)

clean :
	@ $(RM) $(OBJ)
	@ $(RM) $(BOBJ)

fclean : clean
	@ $(RM) $(NAME)
	@ $(RM) $(NAMEB)

re : fclean all bonus
