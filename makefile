CC=g++

all: hook adventure

hook: $(shell ./beforeMake.sh)

adventure: main.o screen.o iterator.o
	$(CC) main.o screen.o iterator.o -lsqlite3 -o adventure

main.o: main.cpp
	$(CC) -c main.cpp

screen.o: screen.cpp
	$(CC) -c screen.cpp

iterator.o: iterator.cpp
	$(CC) -c iterator.cpp

clean:
	rm -rf *.o adventure
