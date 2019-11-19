QueueDemo: main.o Queue.o Tests.o
	g++ -g -Wall -std=c++11 main.o Queue.o Tests.o -o QueueDemo

Tests.o: Tests.h Tests.cpp Queue.h
	g++ -std=c++11 -g -Wall -c Tests.cpp
	
main.o: main.cpp 
	g++ -g -std=c++11 -c main.cpp

clean:
	rm main.o QueueDemo *~
