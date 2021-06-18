##
## EPITECH PROJECT, 2021
## B-CPE-210-PAR-2-1-solostumper12-alexis.amadei
## File description:
## Makefile
##

SRC		=	src/main.c			\
			src/my_print.c 		\
			src/plus_or_minus.c \

OBJ     =       $(SRC:.c=.o)

NAME    =	plus_or_minus

CFLAGS	=	-Wall -Wextra -g3

CPPFLAGS	=	-I ./include/

CC	=	gcc

all: $(OBJ)
	${CC} -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	clear

re:     fclean all

.PHONY	=	all clean fclean re