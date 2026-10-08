#include <iostream>
#include <string>
#include "letter_count.hpp"

int main() {
    int char_counts[N_CHARS] = {0};
    std::string line;

    while (std::getline(std::cin, line)) {
        count(line, char_counts);
    }

    print_counts(char_counts);

    return 0;
}
