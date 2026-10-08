#include <cctype>
#include <iostream>
#include <string>

const int N_CHARS = 26;

int char_to_index(char c) {
    return c - 'A';
}

char index_to_char(int index) {
    return 'A' + index;
}

void count(const std::string& s, int char_counts[]) {
    for (char c : s) {
        if (std::isalpha(static_cast<unsigned char>(c))) {
            c = static_cast<char>(
                std::toupper(static_cast<unsigned char>(c))
            );

            char_counts[char_to_index(c)]++;
        }
    }
}

void print_counts(const int char_counts[]) {
    for (int i = 0; i < N_CHARS; i++) {
        std::cout << index_to_char(i)
                  << " "
                  << char_counts[i]
                  << std::endl;
    }
}
