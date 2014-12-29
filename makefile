CC=g++

all: adventure

adventure: main.o db.o
	$(CC) main.o db.o -lsqlite3 -o adventure

main.o: main.cpp
	$(CC) -c main.cpp

db.o: db.cpp
	$(CC) -c db.cpp

clean:
	rm -rf *.o adventure
