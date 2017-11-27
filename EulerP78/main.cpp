#include <iostream>
#include <vector>


using namespace std;


static vector<long long> pentagon;
vector<long long> A001318(long long max) {
    int i;
    vector<long long> r;

    for(i = 1; i * (3 * i + 1) / 2 <= max; i++) {
        r.push_back(i * (3 * i - 1) / 2);
        r.push_back(i * (3 * i + 1) / 2);
    }

    return r;
}

int A000041(int max = 1000000) {
    int i, j;
    long long v;
    vector<long long> r;

    //Init
    r = {1};

    for(i = 1; i < max; i++) {
        v = 0;

        for(j = 0; j < pentagon.size() && pentagon[j] <= i; j++) {
            if(j % 4 == 0 || j % 4 == 1)
                v += r[i - pentagon[j]];
            else
                v -= r[i - pentagon[j]];

            v %= 1000000;
        }

        r.push_back(v);

        if(v == 0)
            return i;
    }

    return -1;
}

int main() {
    //Generate pentagon numbers
    pentagon = A001318(60000);

    cout << "Result = " << A000041() << endl;

    return 0;
}