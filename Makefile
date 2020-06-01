##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

CC	=	gcc

NAME	=	test

CSFML = -lcsfml-graphics -lcsfml-audio -lcsfml-window -lcsfml-system -lGL

CFLAGS	=	-Wpedantic -O -Werror -Iinc -lm

SRC	=	$(shell find src/ -name '*.c')\
		$(shell find CleanTest/src/ -name '*.c')\
		CleanTest/main.c

OBJ	=	$(SRC:.c=.o)

all:	$(NAME) clean

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(CSFML)

clean:
		rm -f $(OBJ)
		rm -f *~ src/*~ inc/*~  lib/*~

fclean: clean
		rm -f $(NAME)
		rm -f a.out core/a.out lib/a.out

re: fclean all

.PHONY:	fclean	clean	re
