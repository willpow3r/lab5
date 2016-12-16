.PHONY: all clean resolver tests
CFLAGS=-Wall
CC=gcc $(CFLAGS)

all: resolver test subdirs

subdirs:
	mkdir bin
	mkdir obj

resolver: obj/resolver.o obj/sqr_eqn.o
	$(CC) -o bin/resolver obj/resolver.o obj/sqr_eqn.o -lm

obj/resolver.o: src/main.c src/sqr_eqn.h
	$(CC) -o obj/resolver.o -c src/main.c

obj/sqr_eqn.o: src/sqr_eqn.c src/sqr_eqn.h
	$(CC) -o obj/sqr_eqn.o -c src/sqr_eqn.c

test: obj/test.o obj/ctest.o
	$(CC) -o bin/tests obj/test.o obj/ctest.o obj/sqr_eqn.o -lm

obj/test.o: test/test.c
	$(CC) -o obj/test.o -c test/test.c -lm -Isrc -Ithirdparty

obj/ctest.o: test/ctest.c
	$(CC) -o obj/ctest.o -c test/ctest.c -lm -Ithirdparty

clean:
	rm -f bin/*
	rm -f obj/*.o

