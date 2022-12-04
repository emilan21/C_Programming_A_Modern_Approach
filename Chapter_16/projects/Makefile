CC = gcc
CFLAGS = -Wall -g
LDFLAGS =
OBJFILES = p6.o
TARGET = p6

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o p6 $(OBJFILES)

p6.o: p6.c
	$(CC) $(CFLAGS) -c p6.c

clean:
	rm -f $(OBJFILES) $(TARGET) *~ 
