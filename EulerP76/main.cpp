#include <iostream>

using namespace std;

int main()
{
    int m = 100;
    unsigned p[ m ];
    for ( int i = 0; i < m; i++ )
        p[ i ] = 0;

    for ( int k = m - 1; k >= 0; k-- ) {
        p[ k ] = 1;
        for ( int n = k + 1; n < m; n++ )
            p[ n ] += p[ n - k - 1 ];
    }
    cout << "Ways = " << p[ m - 1 ] - 1 << endl;
}