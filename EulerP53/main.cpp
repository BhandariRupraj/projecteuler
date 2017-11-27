#include <iostream>
#include <afxres.h>

using namespace std;

bool P53(int n, int r)
{
    unsigned long long tot = 1;
    int up = r+1;
    int down = 1;
    while (up!=1 || down!=1)
    {
        tot = tot * up / down;
        up++;
        down++;
        if (up>n) up=1;
        if (down>n-r) down=1;
    }
    if (tot>1000000)
        return true;
    return false;
}
int main()
{
    DWORD start = GetTickCount();
    int counter = 0;
    for (int n=1; n<=100; n++)
        for (int r=1; r<=n; r++)
            if (P53(n,r))
                counter++;
    cout << counter << endl;
    return 0;
}