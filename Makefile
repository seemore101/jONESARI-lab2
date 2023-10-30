CC = gcc
SRC = main.c ipc.c time.c
OBJ = $(SRC:.c=.o)
EXEC = time

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) -c $<

clean:
	rm -f $(OBJ) $(EXEC)
