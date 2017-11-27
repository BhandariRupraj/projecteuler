#include <vector>
#include <map>
#include <cmath>
#include <iostream>

using namespace std;

/*
PROJECT EULER PROBLEM 206 - Concealed Square

Find the unique positive integer whose square has the form 1_2_3_4_5_6_7_8_9_0,
where each “_” is a single digit.

*/

int main()
{

    //1_2_3_4_5_6_7_8_9_0
    long long int n=19293949596979899;
    long long int t;
    char s[25];

    for(long long int i=sqrt(n)+1;i>=10000000;i--)
    {
        long long int t=i*i;

        sprintf(s,"%lld",t);


        if((s[0]=='1') && (s[2] == '2')&& (s[4] == '3') && (s[6] == '4') && (s[8] == '5') && (s[10] == '6') && (s[12] == '7') && (s[14] == '8') &&
           (s[16] == '9'))
        {
            long long int ans=i*10;
            cout <<  "Ans:" << ans << endl;
            break;
        }
    }


    return 0;
}


