##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## my make file
##

CC	=	gcc

SRC	=	./src/main.c 					\
		./src/graphic/create.c			\
		./src/graphic/display.c			\
		./src/graphic/destroy.c			\

OBJ	=	$(SRC:.c=.o)

NAME =	tree

CSFMLFLAGS	=	-lcsfml-graphics	\
				-lcsfml-audio		\
				-lcsfml-window		\
				-lcsfml-system		\

CFLAGS	=	-I ./include/		\
			-W					\
			-Wextra				\
			-Wall				\
			-Ofast				\

RM = rm -rf

all:	$(OBJ)
		$(CC) $(OBJ) $(CFLAGS) $(CSFMLFLAGS) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re: 		fclean all
