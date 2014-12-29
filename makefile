all: adventure

adventure: main.o
	g++ main.o -o adventure

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm -rf *.o adventure
