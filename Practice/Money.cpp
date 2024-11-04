// Money.cpp
#include "Money.h"
#include <iostream>

// Constructors
Money::Money() : dollars(0) {}               // Default constructor
Money::Money(int d) : dollars(d) {}          // Parameterized constructor

// Accessor and Mutator
int Money::getMoney() const {
    return dollars;
}

void Money::setMoney(int d) {
    dollars = d;
}

// Overloaded operators
Money Money::operator-() const {             // Unary minus
    return Money(-dollars);
}

Money& Money::operator+=(const Money& rhs) { // += operator
    dollars += rhs.dollars;
    return *this;
}

Money Money::operator+(const Money& rhs) const { // + operator
    return Money(dollars + rhs.dollars);
}

bool Money::operator==(const Money& rhs) const { // == operator
    return dollars == rhs.dollars;
}

// Prefix increment operator
Money& Money::operator++() {
    ++dollars;
    return *this;
}

// Postfix increment operator
Money Money::operator++(int) {
    Money temp = *this;
    ++(*this);
    return temp;
}

// Stream insertion operator for printing
std::ostream& operator<<(std::ostream& os, const Money& m) {
    os << "$" << m.dollars;
    return os;
}