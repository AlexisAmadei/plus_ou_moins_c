##
## EPITECH PROJECT, 2020
## lib Makefile
## File description:
## makes lib file
##

SRCS	=	my_putchar.c	\
		my_putstr.c	\
		my_put_nbr.c	\
		my_strlen.c	\
		my_revstr.c	\
		my_strcpy.c	\
		my_strncpy.c	\
		my_strdup.c	\
		my_strcmp.c	\
		my_strcat.c	\
		my_puterr.c	\
		my_getnbr.c	\
		my_str_to_word_array.c	\
		cut_start_n.c	\
		cut_end_n.c	\
		my_isnum.c	\
		nb_to_str.c	\
		my_intlen.c

OBJ	=	$(SRCS:.c=.o)

NAME	=	libmy.a

$(NAME):	$(OBJ)
	cp my.h ../../include
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ..

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean clean all
