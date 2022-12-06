CC = gcc
CFLAGS = -g -Wall
AR = ar
all: connections

connections: main.o libclassmy_mat.a
	$(CC) $(CFLAGS) -o connections main.o libclassmy_mat.a

libclassmy_mat.a: my_mat.o
	$(AR) -rcs libclassmy_mat.a my_mat.o

main.o: main.c my_mat.h
	$(CC) $(CFLAGS) main.c -c

my_mat.o: my_mat.c my_mat.h
	$(CC) $(CFLAGS) my_mat.c -c

clean:
	rm -f *.o *.a *.so connections maindmat