#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    char num[]="0123456789";

    for(int i=1;i<1000000;i++)

        next_permutation(num,num+10);

    cout << num << endl;


    return 0;
}
