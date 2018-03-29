CXXFLAGS=-std=c++14

main: main.o funcs.o 
	g++ -o main main.o funcs.o

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o

main.o: main.cpp funcs.h
	g++ $(CXXFLAGS) -c main.cpp

tests.o: tests.cpp funcs.h
	g++ $(CXXFLAGS) -c tests.cpp

funcs.o: funcs.cpp funcs.h
	g++ $(CXXFLAGS) -c funcs.cpp


clean:
	rm -f main main.o funcs.o
	rm -f tests tests.o
	rm -f a.out

dev:
	g++ funcs.cpp
	./a.out

