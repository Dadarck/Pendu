CC = cc
SRC = dico.c  my_strlen.c  graphic.c af_etoile.c bravo.c cadre.c my_strcmp.c pendu.c mort.c
OBJ = $(SRC:.c=.o)
CFLAGS = -c
LFLAGS = -o 
NAME = pendu
CURSES = -lncurses 
HEADER = -I./


all : obj
	$(CC) $(LFLAGS) $(NAME) $(OBJ) $(CURSES) $(HEADER) 

obj:
	 $(CC) $(CFLAGS) $(SRC) $(HEADER) 

clean :
	rm -f *.o
	rm -f *~

fclean: clean
	rm -f $(NAME)

re: fclean all

