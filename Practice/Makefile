# Makefile

prog: driver2.o Money.o
	g++ -std=c++11 -o prog driver2.o Money.o

driver2.o: driver2.cpp Money.h
	g++ -std=c++11 -c driver2.cpp

Money.o: Money.cpp Money.h
	g++ -std=c++11 -c Money.cpp

# Clean up object files and executable
clean:
	rm -f driver2.o Money.o prog