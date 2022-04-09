output: main.o
	g++ main.o -o test

main.o: main.cc matrix.cc
	g++ -c main.cc matrix.h

clear:
	rm *.o
	rm test