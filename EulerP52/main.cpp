#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <cstring>


using namespace std;

int main(){
    long i,n = 1;
    char temp[15],tempp[15];

    while( true ){
        sprintf( temp,"%ld", n * 2);
        sort( temp,temp + strlen(temp) );
        for( i = 3; i <= 6; i++ ){
            sprintf( tempp,"%ld", n * i);
            sort( tempp,tempp + strlen(tempp) );
            if( strcmp( temp,tempp) )
                break;
        }

        if( i == 7)
            break;
        n++;
    }

    cout << n << endl;
    return 0;
}
