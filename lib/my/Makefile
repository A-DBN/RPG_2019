##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile to build library
##

### Oriented compilation variables ############################################
#DEBUG INHERITED FROM ROOT MAKEFILE

### Other useful variables ####################################################
CLEAN 	=	make clean --no-print-directory
LDFLAGS	=	-I./include
LIB_GEN	=	ar rc

### Compilator used ###########################################################
CC	=	gcc

### Setting variables according to variables ##################################
ifeq ($(DEBUG),yes)
	CFLAGS	+=	-Wall -Wextra -g
else
	CFLAGS	+=	-Wall -Wextra -Werror
endif

### Execution file name #######################################################
LIB_NAME	=	libmy.a

### Source objects ############################################################

SRC	=	my_calloc.c					\
		my_is_number.c				\
		my_itoa.c					\
		my_memset.c					\
		my_putchar.c				\
		my_putstr.c					\
		my_str_isalpha.c			\
		my_str_isnum.c				\
		my_strcmp.c					\
		my_strlen.c

### Objects & tests objects compilation rules #################################
OBJ		=	$(SRC:.c=.o)

### Entrypoint of the Makefile ################################################
all:	$(LIB_NAME)

### Compiling .o from .c files ################################################
%.o: %.c
	@$(CC) -o $@ -c $< $(CFLAGS) $(LDFLAGS)

### Generating project file ###################################################

$(LIB_NAME):	$(OBJ)
				@$(LIB_GEN) $(LIB_NAME) $(OBJ)

### Clean project's temporary files ###########################################
clean:
			@$(RM) $(OBJ)

### Full clean project ########################################################
fclean:		clean
			@$(RM) $(LIB_NAME)

### Recompile project #########################################################
re: 		fclean all