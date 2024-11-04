// Money.h

#ifndef MONEY_H
#define MONEY_H

#include <iostream>

class Money {
private:
    int dollars;

public:
    // Constructors
    Money();                   // Default constructor
    Money(int d);              // Parameterized constructor

    // Accessor and Mutator
    int getMoney() const;      // Getter for dollars
    void setMoney(int d);      // Setter for dollars

    // Overloaded operators
    Money operator-() const;                  // Unary minus
    Money& operator+=(const Money& rhs);      // += operator
    Money operator+(const Money& rhs) const;  // + operator
    bool operator==(const Money& rhs) const;  // == operator

    // Prefix and postfix increment operators
    Money& operator++();                      // Prefix ++
    Money operator++(int);                    // Postfix ++

    // Stream insertion operator for printing
    friend std::ostream& operator<<(std::ostream& os, const Money& m);
};

#endif