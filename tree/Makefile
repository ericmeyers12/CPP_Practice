all: tree

tree: main.o binary_tree.o
	g++ main.o binary_tree.o  -o tree

main.o: main.cpp
	g++ -c main.cpp

binary_tree.o: binary_tree.cpp
	g++ -c binary_tree.cpp

clean:
	rm *o tree
