#include <iostream>
#include <string>
#include "stack.hpp"

int main() {
    Stack st;
    std::string line;

    while (std::getline(std::cin, line)) {
        push_all(st, line);
        pop_all(st);
    }

    return 0;
}
