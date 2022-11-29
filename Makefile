CC = gcc
CFLAGS = -g -Wall
AR = ar
all: staticlib maindmat connections

connections: main.o my_mat.o staticlib maindmat
	$(CC) $(CFLAGS) main.o my_mat.o -o connections

staticlib: libclassmy_mat.a

maindmat: main.o libclassmy_mat.a
	$(CC) $(CFLAGS) -o maindmat main.o libclassmy_mat.a

libclassmy_mat.a: my_mat.o
	$(AR) -rcs libclassmy_mat.a my_mat.o

my_mat.o: my_mat.c my_mat.h
	$(CC) $(CFLAGS) my_mat.c -c

main.o: main.c my_mat.h
	$(CC) $(CFLAGS) main.c -c

clean:
	rm -f *.o *.a *.so connections maindmat