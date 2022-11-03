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

build/dirList.o: src/dirList.c
	$(CC) -c src/dirList.c -I $(HEADERS) -o build/dirList.o

build/main.o: src/main.c
	$(CC) -c src/main.c -I $(HEADERS) -o build/main.o

build/menu.o: src/menu.c
	$(CC) -c src/menu.c -I $(HEADERS) -o build/menu.o

build/alert.o: src/alert.c
	$(CC) -c src/alert.c -I $(HEADERS) -o build/alert.o

build/screen.o: src/screen.c
	$(CC) -c src/screen.c -I $(HEADERS) -o build/screen.o
run:
	./$(BINARY)$(TARGET)

clean:
	rm -rf $(BUILDDIR)* $(BINARY)*