CC = g++

main: main.o node.o cluster.o learner.o
	$(CC) -o main.o node.o cluster.o learner.o

main.o:	main.cpp
	$(CC) -c main.cpp

node.o:	node.cpp
	$(CC) -c node.cpp

cluster.o:	cluster.cpp
	$(CC) -c cluster.cpp

learner.o:	learner.cpp
	$(CC) -c learner.cpp

clean:
	rm -f core *.o