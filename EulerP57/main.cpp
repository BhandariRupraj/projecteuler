#include <iostream>
#include <algorithm>
#include <vector>


std::vector <char> add_big_int (std::vector <char> &x, std::vector <char> &y)
{
    if (x.size() < y.size()) x.swap(y);//add_big_int(y, x);
    std::size_t max{x.size()}, min{y.size()};
    std::vector <char> sum;
    unsigned int carry{0}, temp{0};
    for (int i{0}; i < min; ++i)
    {
        temp = (x[i]-'0') + (y[i]-'0') + carry;
        sum.push_back('0'+(temp%10));
        carry = temp/10;
    }
    for (int i = min; i < max; ++i)
    {
        temp = (x[i]-'0') + carry;
        sum.push_back('0'+(temp%10));
        carry = temp/10;
    }
    while (carry)
    {
        sum.push_back('0'+(carry%10));
        carry /= 10;
    }

    return sum;
}


int main (void)
{
    std::vector <char> p{'3'}, q{'2'};
    std::vector <char> temp;
    int count{0};
    for (int i{0}; i < 1000; ++i)
    {
        temp = add_big_int (p, q);
        p = add_big_int(temp, q);
        q = temp;
        if (p.size()>q.size()) ++count;
    }

    std::cout << count << '\n';

}