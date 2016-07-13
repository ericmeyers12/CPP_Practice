all: singleton

singleton: main.o base.o derived.o
	g++ main.o base.o derived.o -o singleton

main.o: main.cpp
	g++ -c main.cpp

base.o: base.cpp
	g++ -c base.cpp

derived.o: derived.cpp
	g++ -c derived.cpp


clean:
	rm *o singleton
