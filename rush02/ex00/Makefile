CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = main.c dict_file.c ft_char_read.c ft_check.c
OBJ = main.o dict_file.o ft_char_read.o ft_check.o
EXEC = rush-02

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(EXEC)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c -o main.o

dict_file.o: dict_file.c
	$(CC) $(CFLAGS) -c dict_file.c -o dict_file.o

ft_char_read.o: ft_char_read.c
	 $(CC) $(CFLAGS) -c ft_char_read.c -o ft_char_read.o

ft_check.o: ft_check.c
	$(CC) $(CFLAGS) -c ft_check.c -o ft_check.o

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(EXEC)

re: fclean all
