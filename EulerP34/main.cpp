#include <iostream>

using namespace std;

int fact( int n )
{
    if ( n == 0 )
    {
        return 1;
    }

    if ( n == 1 )
    {
        return 1;
    }

    if ( n == 2 )
    {
        return 2;
    }

    int total = 1;

    int i;
    for ( i = 2; i <= n; i++ )
    {
        total *= i;
    }

    return total;
}

int followsTheRules( int num )
{
    int total = 0;
    int temp = num;

    while( temp >= 1 )
    {
        total += fact( temp % 10 );
        temp /= 10;
    }

    if ( num == total )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    cout.setf( ios_base::fixed, ios_base::floatfield );
    cout.precision( 0 );

    int total = 0;
    int counter = 3;

    while( counter < 50000 )
    {
        if ( followsTheRules( counter ) )
        {
            total += counter;
        }

        counter++;
    }

    cout << "\nSolution: " << total << endl;

    return 0;
}