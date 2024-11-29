NAME = ft_printf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -I ./

SRC = ft_printf.c ft_num.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rsc $(NAME) $(OBJ)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean :
		rm -f $(OBJ) $(BONUS_OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY : clean all fclean re 