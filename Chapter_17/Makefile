CC = gcc
CFLAGS = -Wall -g
LDFLAGS =
OBJFILES = tabulate.o
TARGET = tabulate

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -lm -o tabulate $(OBJFILES)

tabulate.o: tabulate.c
	$(CC) $(CFLAGS) -c tabulate.c

clean:
	rm -f $(OBJFILES) $(TARGET) *~ 
