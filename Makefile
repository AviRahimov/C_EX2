CC = gcc
CFLAGS = -g -Wall

all:connections

connections: main.o my_mat.o
	$(CC) $(CFLAGS) main.o my_mat.o -o connections
my_mat.o: my_mat.c my_mat.h
	$(CC) $(CFLAGS) my_mat.c -c
main.o: main.c my_mat.h
	$(CC) $(CFLAGS) main.c -c

clean:
	rm -f *.o *.a *.so