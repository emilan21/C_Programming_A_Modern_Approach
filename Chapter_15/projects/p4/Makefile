CC = gcc
CFLAGS = -Wall -g
LDFLAGS =
OBJFILES = remind.o readline.o
TARGET = remind

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o remind $(OBJFILES)

remind.o: remind.c readline.h
	$(CC) $(CFLAGS) -c remind.c
readline.o: readline.c readline.h
	$(CC) $(CFLAGS) -c readline.c

clean:
	rm -f $(OBJFILES) $(TARGET) *~ 
