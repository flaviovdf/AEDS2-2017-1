CC = gcc
CFLAGS = -Wall
LDFLAGS =

all: hashtable.o student.o
	$(CC) main.c hashtable.c student.c $(CFLAGS) -o main $(LDFLAGS)

clean:
	-rm -f *.o main
