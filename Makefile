##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile to build the project
##

### Execution file name #######################################################
EXEC_NAME	=	my_rpg

### Source objects ############################################################
SRC_MAIN	=	main.c
SRC			=	usage.c	\
				events/dir_move.c	\
				events/handler.c	\
				events/keyboard.c	\
				events/mouse_click.c	\
				events/mouse_click_bis.c	\
				events/mouse_move.c	\
				events/update_mouse_pos.c	\
				events/window.c	\
				game/update_display.c	\
				game/update_display_bis.c	\
				game/quest.c	\
				game/fight.c	\
				loop/window.c	\
				structs/free/clocks.c	\
				structs/free/events.c	\
				structs/free/inventory.c	\
				structs/free/maps.c	\
				structs/free/player.c	\
				structs/free/rpg.c	\
				structs/free/sprites.c	\
				structs/free/stats.c	\
				structs/free/text.c	\
				structs/free/weapons.c	\
				structs/free/window.c	\
				structs/init/clocks.c	\
				structs/init/events.c	\
				structs/init/inventory.c	\
				structs/init/maps.c	\
				structs/init/player.c	\
				structs/init/rpg.c	\
				structs/init/sprites.c	\
				structs/init/stats.c	\
				structs/init/text.c	\
				structs/init/weapons.c	\
				structs/init/window.c	\
				structs/sfml/init_sprites.c	\
				structs/sfml/window.c	\
				structs/sprites/load_font.c	\
				structs/sprites/load_sprite.c	\
				structs/sprites/my_create_text.c

### Oriented compilation variables ############################################
DEBUG			=	no
GRAPHIC			=	yes
NCURSES			=	no
USE_MY_LIBRARY	=	yes
TESTS			=	no

### Other useful variables ####################################################
MAKE_PROJECT	=	make --no-print-directory
MAKE_LIB		=	make -C lib/my all --no-print-directory DEBUG=$(DEBUG)
CLEAN_LIB		=	make -C lib/my clean --no-print-directory
FCLEAN_LIB		=	make -C lib/my fclean --no-print-directory
RE_LIB			=	make -C lib/my re --no-print-directory
MAKE_TESTS		=	make -C tests all --no-print-directory USE_MY_LIBRARY=$(USE_MY_LIBRARY) SRC="$(addprefix src/,$(SRC))"
CLEAN_TESTS		=	make -C tests clean --no-print-directory
FCLEAN_TESTS	=	make -C tests fclean --no-print-directory
RM				=	rm -f

### Compilator used ###########################################################
CC	=	gcc

### Setting variables according to variables ##################################
ifeq ($(DEBUG),yes)
	CFLAGS	+=	-Wall -Wextra -g
	LDFLAGS	+=	-I./src/include -I./lib/my/include
else
	CFLAGS	+=	-Wall -Wextra -Werror
	LDFLAGS	+=	-I./src/include -I./lib/my/include
endif
ifeq ($(GRAPHIC),yes)
	LIB	+=	-l csfml-graphics -l csfml-window -l csfml-audio -l csfml-system
endif
ifeq ($(NCURSES),yes)
	LIB	+=	-lncurses
endif
ifeq ($(USE_MY_LIBRARY),yes)
	LIB	+=	-L./lib/my -lmy
endif

### Objects compilation rule ##################################################
OBJ_MAIN	=	$(SRC_MAIN:.c=.o)
OBJ			=	$(SRC:.c=.o)

### Entrypoint of the Makefile ################################################
all:	$(EXEC_NAME)

### Compiling .o from .c files ################################################
%.o: %.c
	@$(CC) -o $@ -c $< $(CFLAGS) $(LDFLAGS) $(LIB)

### Generating project file ###################################################

$(EXEC_NAME):	$(addprefix src/,$(OBJ))	$(addprefix src/,$(OBJ_MAIN))
ifeq ($(USE_MY_LIBRARY),yes)
	@$(MAKE_LIB)
endif
	$(CC) -o $(EXEC_NAME) $^ $(LDFLAGS) $(LIB)

### Generating test executable ################################################
tests_run:
ifeq ($(TESTS),yes)
ifeq ($(USE_MY_LIBRARY),yes)
	@$(MAKE_LIB)
endif
	@$(MAKE_TESTS)
else
	@echo -e "The rule tests_run isn't enabled."
endif

### Clean project's temporary files ###########################################
clean:
			@$(RM) $(addprefix src/,$(OBJ)) $(addprefix src/,$(OBJ_MAIN))
ifeq ($(TESTS),yes)
	@$(CLEAN_TESTS)
endif
ifeq ($(USE_MY_LIBRARY),yes)
	@$(CLEAN_LIB)
endif

### Full clean project ########################################################
fclean:		clean
	@$(RM) $(EXEC_NAME)
ifeq ($(TESTS),yes)
	@$(FCLEAN_TESTS)
endif
ifeq ($(USE_MY_LIBRARY),yes)
	@$(FCLEAN_LIB)
endif

### Recompile project #########################################################
re: 		fclean
ifeq ($(USE_MY_LIBRARY),yes)
	@$(RE_LIB)
endif
	@$(MAKE_PROJECT)

.PHONY:	all tests_run clean fclean re $(EXEC_NAME)
