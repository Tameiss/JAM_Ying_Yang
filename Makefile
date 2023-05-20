SRC	=	src/main.c					\
		src/run_menu.c 				\
		src/run_game.c 				\
		src/init/window_init.c 		\
		src/init/menu_init.c		\
		src/init/game_init.c		\

OBJ	=	$(SRC:.c=.o)

%.o: %.c
	@gcc -c $< -o $@ -g -Wextra -Wall -Wshadow
	@printf " \033[34m[Compilation]\033[39m %s\n" $<

NAME	=	YingYang

LIB_COMP	=	-I ./include

NCURSES_COMP	=	-lncurses

CSFML_COMP	=	-lcsfml-window -lcsfml-graphics -lcsfml-audio -lcsfml-system

all:	$(NAME)

$(NAME):	$(OBJ)
	@gcc -g -o $(NAME) $(OBJ) $(CSFML_COMP)
	@printf "\n \033[33m[Message]\033[39m Compilation done\n"

clean:
	@rm -f $(OBJ)
	@printf " \033[31m[Delete] \033[39m%s\n" $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@printf "\n \033[31m[Delete] \033[39m%s\n" $(NAME)
	@printf "\n \033[33m[Message]\033[39m Cleaning done\n"

re: all clean
	@printf "\n \033[33m[GCC -Build fine]\033[39m Compilation done"
	@printf "\n \033[33m[Clean*.o -Repository ready]\033[39m Cleaning done"
	@printf "\n \033[32m[Binary Ready]\033[39m \n"

.PHONY 	= 	all clean fclean re %.o