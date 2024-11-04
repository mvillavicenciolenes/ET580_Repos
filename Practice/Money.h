#ifndef MONEY_H
#define MONEY_H

#include <iostream>

class Money {
private:
    int dollars;
public:
    Money(): Money(0){};
    Money(int d): dollars(d){};
    int getMoney() const {return dollars;};
    void setMoney(int d) { std::cout<< dollars << std::endl;};
};



#endif
