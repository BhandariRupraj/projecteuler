#include <iostream>
#include <numeric>
#include <set>

using namespace std;

bool is_pandigital19( unsigned n )
{
    unsigned t = 0x3fe;
    for ( int i = 0; i < 9; i++, n /= 10 )
        t ^= 1 << ( n % 10 );
    return t == 0 && n == 0;
}

int main()
{
    set< int > n;
    for ( int a = 1; a <= 9; a++ )
        for ( int b = 1234; b < 10000 / a; b++ ) {
            int p = a * b;
            if ( is_pandigital19( 100000 * p + 10 * b + a  ) )
                n.insert( p );
        }
    for ( int a = 12; a <= 98; a++ )
        for ( int b = 123; b < 10000 / a; b++ ) {
            int p = a * b;
            if ( is_pandigital19( 100000 * p + 100 * b + a  ) )
                n.insert( p );
        }

    cout << "Sum = " << accumulate( n.begin(), n.end(), 0 ) << endl;
}
