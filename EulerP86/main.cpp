#include <iostream>
#include <set>
#include <algorithm>
#include <cmath>

using namespace std;

#define N 1000000
#define SQ 5000

int main()
{
    // Find all squares up to SQ
    set<int> squares;
    for (int i = 1; i < SQ; i++)
        squares.insert(i*i);

    int M, prev = 0;
    for (M = 2;; M++) {
        // Include previous level's solutions
        int count = prev;
        int MM = M*M;
        int limit = 4*MM + MM;
        set<int>::iterator lb = upper_bound(squares.begin(), squares.end(), MM);
        // Find all shortest paths squared
        while (*lb <= limit) {
            int diff = *lb - MM;
            // The difference is also a square
            if (squares.find(diff) != squares.end()) {
                int sum = sqrt(diff);
                // Count all legal pairs of numbers that sum to that difference
                for (int i = 1; i <= sum/2; i++)
                    count += sum-i <= M;
            }
            lb++;
        }
        prev = count;
        if (count > N)
            break;
    }
    cout << M << endl;
}