CC = gcc
CFLAGS = -Wall -g
LDFLAGS =
OBJFILES = p8.o
TARGET = p8

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o p8 $(OBJFILES)

p8.o: p8.c
	$(CC) $(CFLAGS) -c p8.c

clean:
	rm -f $(OBJFILES) $(TARGET) *~ 
