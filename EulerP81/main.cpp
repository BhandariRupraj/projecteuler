#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;
typedef unsigned long ulong;

int main()
{
    ifstream matrixVals("C:/Users/s521059/CLionProjects/Euler Project/EulerP81/p081_matrix.txt");
    vector< vector<ulong> > matrix;

    if (!matrixVals) {
        cerr << "Error openning file";
        return -1;
    }

    // populate the matrix with values
    // from the input file.
    string row;
    while (getline(matrixVals, row)) {
        istringstream rowStream(row);
        vector<ulong> numRow;
        ulong num;
        char delim;

        do{
            rowStream >> num >> delim;
            numRow.push_back(num);
        } while (rowStream);

        matrix.push_back(numRow);
    }
    matrixVals.close();

    // handle the edges
    for (ulong j = 1; j < matrix[0].size(); j++)
        matrix[0][j] += matrix[0][j-1];
    for (ulong i = 1; i < matrix.size(); i++)
        matrix[i][0] += matrix[i-1][0];

    for (ulong i = 1; i < matrix.size(); i++)
        for (ulong j = 1; j < matrix[i].size(); j++)
            matrix[i][j] += min(matrix[i-1][j], matrix[i][j-1]);


    cout << matrix[matrix.size()-1][matrix[matrix.size()-1].size()-1];
    return 0;
}