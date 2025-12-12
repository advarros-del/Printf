#***************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrvarga <adrvarga@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/17 15:46:01 by adrvarga          #+#    #+#              #
#    Updated: 2025/12/12 10:39:20 by adrvarga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Name of the file that the makfile it's going to create.
NAME = libftprintf.a

#compiler that you will going to use
CC = cc 

#Flags that the compiler have to be use.
FLAGS = -Wextra -Werror -Wall

 

#All files .c that you need
SRC = ft_printch.c ft_printstr.c ft_printnbr.c  ft_printhex.c ft_putchar_fd.c ft_printf.c ft_printptr.c ft_printunsig.c
	
#Transform all the .c to .o
OBJ := $(SRC:%.c=%.o)

all : $(NAME)
$(NAME) : $(OBJ)
	ar -rcs $(NAME) $(OBJ)

%o: %.c
	$(CC) $(FLAGS) -c $< -o $@ 

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
