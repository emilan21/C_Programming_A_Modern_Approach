CC = gcc
CFLAGS = -Wall -g
LDFLAGS =
OBJFILES = inventory.o readline.o
TARGET = inventory

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o inventory $(OBJFILES)

inventory.o: inventory.c readline.h
	$(CC) $(CFLAGS) -c inventory.c
readline.o: readline.c readline.h
	$(CC) $(CFLAGS) -c readline.c

clean:
	rm -f $(OBJFILES) $(TARGET) *~ 
