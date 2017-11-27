#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

typedef long long I;
int main()
{
    map<vector<int>,int> cm;
    map<vector<int>,I> first;
    for(I i=1;;i++)
    {
        I num = i*i*i;
        vector<int> digits;
        for(I N=num;N;N/=10)
            digits.push_back(N%10);
        sort(digits.begin(),digits.end());
        if(cm.find(digits) == cm.end())
        {
            cm[digits] = 1;
            first[digits] = num;
        }
        else if(++cm[digits]==5)
        {
            cout <<"Cube:"<< first[digits] << endl;
            return 0;
        }
    }
}