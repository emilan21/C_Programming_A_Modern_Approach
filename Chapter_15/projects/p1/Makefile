CC = gcc
CFLAGS = -Wall -g
LDFLAGS =
OBJFILES = justify.o word.o line.o
TARGET = justify

$(TARGET): $(OBJFILES)
	gcc -o justify $(OBJFILES)

justify.o: justify.c word.h line.h
	gcc -c justify.c
word.o: word.c word.h
	gcc -c word.c
line.o: line.c line.h
	gcc -c line.c

clean:
	rm -f $(OBJFILES) $(TARGET) *~ 
