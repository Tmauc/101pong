##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC	=	my_getnbr.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS	=	-Wextra -Wall -Werror

CPPFLAGS=	-I ../../include

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all
