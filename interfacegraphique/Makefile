##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## 
##

SRC	=	src/main.c	\
		src/setup.c	\
		src/move.c	\
		src/check.c	\
		src/keyboard.c	\
		src/randnumb.c	\
		src/reset.c	\
		src/gameover.c	\
		src/angles.c	\
		affichage/affichage.c	\
		affichage/winplayer1.c	\
		affichage/winplayer2.c

OBJ	=	$(SRC:.c=.o)

NAME	=	101pong2D

LDFLAGS	=	-lncurses

CFLAGS	= -Wextra -Wall

CPPFLAGS= -I include

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
