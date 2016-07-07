all: hash_main

hash_main: main.o linked_list.o hash_map.o
	g++ -std=c++11 main.o linked_list.o hash_map.o -o hash_main

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

linked_list.o: linked_list.cpp
	g++ -std=c++11 -c linked_list.cpp

hash_map.o: hash_map.cpp
	g++ -std=c++11 -c hash_map.cpp

clean:
	rm *o hash_main
