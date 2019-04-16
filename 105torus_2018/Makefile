##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile 105torus
##

SRC		=	src/main.c	\
			src/get_arg.c	\
			src/newton.c

OBJ		=	$(SRC:.c=.o)

NAME	=	105torus

CC		=	gcc

all:	$(NAME)

$(NAME):	$(OBJ)
	@echo -e "\n\033[38;5;11m⌛  START Compliation of Library\033[0m\033[K\n"
	@make -C lib/my
	@echo -e "\n\033[38;5;11m⌛  START Compliation of $(NAME) including Library & .h\033[0m\033[K\n"
	@$(CC) -lm -o $(NAME) $(OBJ) -L./lib/my -lmy -I./include
	@echo -e "\n\033[38;5;22m✅  MAKE $(NAME)\033[0m\033[K\n"

clean:
	@rm -f $(OBJ)
	@rm -f vgcore.*
	@rm -f src/*.o
	@echo -en "\n\033[38;5;124m❌  CLEAN .o & vgcore\033[0m\033[K\n\n"

fclean:	clean
	@make fclean -C lib/my
	@rm -f $(NAME)
	@echo -en "\n\033[38;5;124m❌  FCLEAN $(NAME) \033[0m\033[K\n\n"

re:	fclean all