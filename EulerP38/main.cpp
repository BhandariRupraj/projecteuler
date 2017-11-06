#include <iostream>
#include <map>
#include <stdint.h>

int64_t concatenate(const int64_t a, const int64_t b);
bool is_pandigital(const int64_t n);

typedef std::map<int, std::pair<int, int> > map_range;
typedef std::pair<int, std::pair<int, int> > n_range;
typedef std::pair<int, int> ipair;

int main() {

    int64_t solution = 0;

    // Load the ranges for each n as a map
    map_range ranges;
    ranges.insert(n_range(2, ipair(5000, 10000)));
    ranges.insert(n_range(3, ipair(100, 334)));
    ranges.insert(n_range(4, ipair(25, 34)));

    // Iterate over the range for each key
    for (map_range::iterator i = ranges.begin(); i != ranges.end(); i++) {
        for (int cand = i->second.first; cand < i->second.second; cand++) {
            // Perform the concatenation for each multiple of candidate
            int concatenation = -1;
            for (int n = 1; n <= i->first; n++) {
                concatenation = concatenate(concatenation, cand * n);
            }

            // If the concatenation is pandigital, record it
            if (is_pandigital(concatenation)) {
                solution = std:: max<int64_t>(solution, concatenation);
            }
        }
    }

    std::cout << solution << std::endl;

}


int64_t concatenate(const int64_t a, const int64_t b) {
    // Handle negative input
    if (a < 0 && b < 0)
        throw "Exception: concatenating two negative numbers";
    if (a < 0 || b < 0)
        return std::max<int64_t>(a, b);

    // Concatenate the two numbers by adding the second number to the first * pow(10, d)
    int64_t x = a, y = b;
    for ( ; y != 0; y /= 10)
        x *= 10;
    return (x + b);
}

// Checks if a number is pandigital 1 to 9
bool is_pandigital(const int64_t n) {
    unsigned char bitmap_n = 0;
    int count = 0;
    for (int64_t num = n; num != 0; num /= 10, count++) {
        bitmap_n = (bitmap_n | (1 << (num % 10 - 1)));
    }


    return bitmap_n == (unsigned char)( (1 << count) - 1);
}
