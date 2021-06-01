##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC	=	src/101pong.c \
		src/main.c

OBJ     =       $(SRC:.c=.o)

NAME	=	101pong

CFLAGS	=	-Wextra -Wall -Werror

CPPFLAGS=	-I include

LDFLAGS	=	-L./lib/my -lmy -lm

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	ar rc $(NAME) $(OBJ)
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $(NAME) $(SRC) $(LDFLAGS)

clean:
	$(RM) $(OBJ)
	make clean -C lib/my

fclean:	clean
	make fclean -C lib/my
	$(RM) $(NAME)

re:	fclean all
