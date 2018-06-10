##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

NAME	= 101pong

CC	= gcc

RM	= rm -f

SRCS	= ./src/main.c 	\
	  ./src/my_str_isnum.c

OBJS	= $(SRCS:.c=.o)

CFLAGS += -I ./include

CFLAGS += -W -Wall -Wextra

LDFLAGS += -L ./lib/ -lmy -lm

all: $(NAME)

$(NAME): $(OBJS)
	 make -C ./lib/my/
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS) $(CFLAGS)
	 rm ./src/*.o

clean:
	 make fclean -C ./lib/my/
	 $(RM) $(OBJS)

fclean:  clean
	 $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
