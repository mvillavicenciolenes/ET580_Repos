
prog : driver2.o Money.o
	g++ -std=c++11 -o prog driver2.o Money.o

driver2.o : Money.h
	g++ -std=c++11 -c driver2.cpp

# remove all object and executable files
clean:
	rm driver2.o Moneyr.o
	rm prog