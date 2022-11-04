CC=gcc
TARGET=main
SOURCEDIR=src
BUILDDIR=build
BINARY=bin
HEADERS=include

CFLAGS= -Wall -Wextra -I $(HEADERS) -lncurses

SOURCES = $(wildcard $(SOURCEDIR)/*.c)

OBJECTS = $(patsubst $(SOURCEDIR)/%.c,$(BUILDDIR)/%.o,$(SOURCES))

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) $(CFLAGS) -o $(BINARY)/$(TARGET)

$(BUILDDIR)/%.o: $(SOURCEDIR)/%.c
	$(CC) -c $< -I $(HEADERS) -o $@

run:
	./$(BINARY)/$(TARGET)

clean:
	rm -rf $(BUILDDIR)/* $(BINARY)/*