CC=g++

all: adventure

adventure: main.o db.o screen.o
	$(CC) main.o db.o screen.o -lsqlite3 -o adventure

main.o: main.cpp
	$(CC) -c main.cpp

db.o: db.cpp
	$(CC) -c db.cpp

screen.o: screen.cpp
	$(CC) -c screen.cpp

clean:
	rm -rf *.o adventure
