$(CC) = gcc
time: main.o ipc.o time.o
	$(CC) -o $@ $?
time.o: time.c
	$(CC) -c $?
main.o: main.c
	$(CC) -c $?
ipc.o: ipc.c
	$(CC) -c $?
clean:
	rm -f *.o
