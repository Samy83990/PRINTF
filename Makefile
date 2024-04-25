##
## EPITECH PROJECT, 2024
## B-CPE-101-MAR-1-1-myprintf-samy.chakrouni
## File description:
## Makefile
##


NAME	=	myprintf

SRC 	=	$(wildcard main_func/*.c)
SRC += $(wildcard func/*.c)

OBJ	=	$(SRC:.c=.o)

CPPFLAGS=	-I./include/

all	:	$(OBJ)
		gcc $(CFLAGS) -o $(NAME) $(SRC) $(CPPFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)
		rm -f *#
		rm -f main_func/*#
		rm -f include/*#
		rm -f *~
		rm -f main_func/*~
		rm -f include/*~

re	:	fclean all
