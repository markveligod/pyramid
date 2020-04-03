NAME = pyramid.exe
SRC = src\main.c src\pyramid.c src\ft_atoi.c src\ft_putchar.c
INC = includes

all:
	@gcc -I $(INC) $(SRC) -o $(NAME)
clean:
	@del $(NAME)
re: clean all
