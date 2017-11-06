#include<iostream>
#include<map>
#include<cmath>

using namespace std;

bool is_square(int n);

int main() {

	map <int, unsigned long long int> m;

	for(int p = 1; p <= 1000; ++p) m[p] = 0;

	for(unsigned int a = 1; a < 1000; ++a)
		for(unsigned int b = a; b < 1000; ++b) {

			if(!is_square(a*a+b*b)) continue;
			if(a+b+sqrt(a*a+b*b) > 1000) continue;
			++m[a+b+sqrt(a*a+b*b)];

			}

	int max = 0;
	int winner = 0;

	for(int p = 1; p <= 1000; ++p)
		if(m[p] > max) {max = m[p]; winner = p;}

    cout << winner << endl;

    return 0;

}


bool is_square(int n) {

	for(int i = 1; i <= sqrt(n); ++i)
		if(n == i*i) return 1;

	return 0;

	}
