#include <iostream>

int main() {

    int x0 = 7.8; // narrows
    int x1 {7.8}; // error: {} doesn't narrow
    int x2 = {7.8}; // error: = {} doesnt narrow (redundant = is allowed)
    int x3 = (7.8); // narrows

    double d = 0;

    while (std::cin >> d) {
        int i = d;
        char c = i;

        double num = 20.2;

        std::cout << "d=="<< d
                  << " i==" << i
                  << " c==" << c
                  << " char(" << c << ")\n";
    }
}