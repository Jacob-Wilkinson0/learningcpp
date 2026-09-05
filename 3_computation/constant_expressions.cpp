#include <iostream>

int main() {

    // a constexpr symbolic constant is given a value that is known at runtime.
    constexpr double pi = 3.14159265; // Works

    int n;
    std::cin >> n;
    constexpr int c2 = n + 7; // Does not work, because the value of n is unknown


    // To handle cases when the value of a constant that is initalized with a value that is not known at compile time
    // but never changes after initialization, C++ has const
    int c;
    std::cin >> c;

    const int c3 = c; // Works
    c3 = 7; // Does not work since c3 is a constant

}