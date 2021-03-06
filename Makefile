##
## EPITECH PROJECT, 2018
## Delivery
## File description:
## __DESCRIPTION__
##

SRC	=	main.c		\
		bs.c		\
		bc.c

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my/
	gcc -o $(NAME) $(OBJ) -Llib/my -lmy

clean:
	make -C lib/my/ clean
		rm -f $(OBJ)

fclean: clean
	make -C lib/my/ fclean
		rm -f $(NAME)

re: fclean all
	make -C lib/my/ re
		rm -rf libmy.a

.PHONY:		all clean fclean re
