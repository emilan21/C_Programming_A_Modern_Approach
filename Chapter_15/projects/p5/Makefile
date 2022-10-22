CC = gcc
CFLAGS = -Wall -g
LDFLAGS =
OBJFILES = p6.o stack.o
TARGET = p6

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o p6 $(OBJFILES)

p6.o: p6.c stack.h
	$(CC) $(CFLAGS) -c p6.c
stack.o: stack.c stack.h
	$(CC) $(CFLAGS) -c stack.c

clean:
	rm -f $(OBJFILES) $(TARGET) *~ 
