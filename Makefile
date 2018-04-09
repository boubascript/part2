CXXFLAGS=-std=c++14

main: main.o funcs.o 
	g++ -o main main.o funcs.o

main.o: main.cpp funcs.h
	g++ $(CXXFLAGS) -c main.cpp

funcs.o: funcs.cpp funcs.h
	g++ $(CXXFLAGS) -c funcs.cpp

clean:
	rm -f main main.o funcs.o

dev:
	g++ funcs.cpp
	./a.out