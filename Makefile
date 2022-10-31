CC=gcc
TARGET=main
SOURCEDIR=src/
BUILDDIR=build/
BINARY=bin/
HEADERS=include/

CFLAGS= -Wall -I $(HEADERS)

OBJECTS=\
		build/dirList.o\
		build/main.o\


all: $(OBJECTS)
	$(CC) $(OBJECTS) $(CFLAGS) -o $(BINARY)$(TARGET)

build/dirList.o: src/dirList.c
	$(CC) -c src/dirList.c -I $(HEADERS) -o build/dirList.o

build/main.o: src/main.c
	$(CC) -c src/main.c -I $(HEADERS) -o build/main.o



run:
	./$(BINARY)$(TARGET)

clean:
	rm -rf $(BUILDDIR)* $(BINARY)*