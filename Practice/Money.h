// Money.h

#ifndef MONEY_H
#define MONEY_H

#include <iostream>

class Money {
private:
    int dollars;

public:
    // Constructors
    Money() : dollars(0) {}                      // Default constructor
    Money(int d) : dollars(d) {}                 // Parameterized constructor

    // Accessor for getting dollars value
    int getMoney() const { return dollars; }
    
    // Overloaded operators
    Money operator-() const { return Money(-dollars); }  // Unary minus

    Money& operator+=(const Money& rhs) {                // += operator
        dollars += rhs.dollars;
        return *this;
    }

    Money operator+(const Money& rhs) const {            // + operator
        return Money(dollars + rhs.dollars);
    }

    bool operator==(const Money& rhs) const {            // == operator
        return dollars == rhs.dollars;
    }

    // Stream insertion operator for printing
    friend std::ostream& operator<<(std::ostream& os, const Money& m) {
        os << "$" << m.dollars;
        return os;
    }

    // Prefix and postfix increment operators
    Money& operator++() {        // Prefix ++
        ++dollars;
        return *this;
    }

    Money operator++(int) {      // Postfix ++
        Money temp = *this;
        ++(*this);
        return temp;
    }
};

#endif