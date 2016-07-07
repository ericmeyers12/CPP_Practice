all: shapes

shapes: main.o shape.o rectangle.o circle.o
	g++ main.o shape.o rectangle.o circle.o -o shapes

main.o: main.cpp
	g++ -c main.cpp

shape.o: shape.cpp
	g++ -c shape.cpp

rectangle.o: rectangle.cpp
	g++ -c rectangle.cpp

circle.o: circle.cpp
	g++ -c circle.cpp

clean:
	rm *o shapes
