// driver2.cpp

#include <iostream>
#include "Money.h"

int main() {
    std::cout << std::endl;

    Money m1{10};
    Money m2{20};
	
    std::cout << m1 << " " << m2 << "\n\n";     // Test stream operator
    std::cout << -m1 << "\n";                   // Test unary minus
    std::cout << (m1 += m2) << "\n";            // Test += operator
    std::cout << (m1 + m2) << "\n";             // Test + operator
    std::cout << m1 << "\n\n";                  // Confirm result of m1 += m2 and m1 + m2
    std::cout << (++m1) << "\n";                // Test prefix increment
    std::cout << (m1++) << "\n";                // Test postfix increment
    std::cout << m1 << "\n\n";                  // Confirm prefix/postfix result
    std::cout << (m1 == m2) << "\n";            // Test equality operator

    std::cout << std::endl;
    return 0;
}