CC=gcc
CFLAGS=-O3 -Wall

all: build

build:
	$(CC) $(CFLAGS) -o oaklib.o -c src/oaklib.c
	$(CC) -shared $(CFLAGS) -o liboaklib.so oaklib.o

install: build
	mkdir $(PREFIX)/include/oaklib
	cp ./src/*.h $(PREFIX)/include/oaklib/
	cp ./liboaklib.so $(PREFIX)/lib/liboaklib.so

uninstall:
	rm -r $(PREFIX)/include/oaklib
	rm $(PREFIX)/lib/liboaklib.so

clean:
	rm oaklib*