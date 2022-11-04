CC=gcc
TARGET=main
SOURCEDIR=src/
BUILDDIR=build/
BINARY=bin/
HEADERS=include/

CFLAGS= -Wall -I $(HEADERS) -lncurses

OBJECTS=\
		build/dirList.o\
		build/main.o\
		build/menu.o\
		build/alert.o\
		build/screen.o\

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) $(CFLAGS) -o $(BINARY)$(TARGET)

$(BUILDDIR)%.o: $(SOURCEDIR)%.c
	$(CC) -c $^ -I $(HEADERS) -o $@

run:
	./$(BINARY)$(TARGET)

clean:
	rm -rf $(BUILDDIR)* $(BINARY)*