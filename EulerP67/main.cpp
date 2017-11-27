#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

const string INPUT_FILE_NAME = "C:/Users/s521059/CLionProjects/Euler Project/EulerP67/p067_triangle.txt";


void parseFile(ifstream& inFile, vector<vector<unsigned> >& lines);

// Returns the sum of the optimal path through the triangle
unsigned calculate(vector<vector<unsigned> >& lines);

int main() {
    ifstream inFile;
    inFile.open(INPUT_FILE_NAME.c_str());

    // 1D=lines 2D=numbers in each line
    vector<vector<unsigned> > lines;
    parseFile(inFile, lines);

    cout << calculate(lines) << endl;
}

void parseFile(ifstream& inFile, vector<vector<unsigned> >& lines) {
    string line;
    unsigned number;
    while (getline(inFile, line)) {
        lines.push_back(vector<unsigned> ());
        istringstream stringStream(line);
        while (stringStream >> number)
            lines.back().push_back(number);
    }

    reverse(lines.begin(), lines.end());
}

unsigned calculate(vector<vector<unsigned> >& lines) {
    // Starting at the bottom of the triangle...
    for (int k = 0; k < lines.size() - 1; ++k) {
        vector<unsigned>& current = lines.at(k);
        vector<unsigned>& next = lines.at(k + 1);


        for (int i = 0; i < current.size() - 1; i++)
            if (current[i] >= current[i + 1]) next[i] += current[i];
            else next[i] += current[i + 1];
    }

    // the new value at top of the triangle
    return lines.back()[0];
}