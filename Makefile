##
## EPITECH PROJECT, 2021
## B-CPE-210-PAR-2-1-solostumper12-alexis.amadei
## File description:
## Makefile
##

SRC		=	src/main.c		\

OBJ     =       $(SRC:.c=.o)

NAME    =	plus_or_minus

CFLAGS	=	-Wall -Wextra -g3

CPPFLAGS	=	-I ./include/ -Llib/ -lmy lib/my/

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