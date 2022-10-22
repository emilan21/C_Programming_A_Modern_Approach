CC = gcc
CFLAGS = -Wall -g
LDFLAGS =
OBJFILES = justify.o word.o line.o
TARGET = justify

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o justify $(OBJFILES)

justify.o: justify.c word.h line.h
	$(CC) $(CFLAGS) -c justify.c
word.o: word.c word.h
	$(CC) $(CFLAGS) -c word.c
line.o: line.c line.h
	$(CC) $(CFLAGS) -c line.c

clean:
	rm -f $(OBJFILES) $(TARGET) *~ 
