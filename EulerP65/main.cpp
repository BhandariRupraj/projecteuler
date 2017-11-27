#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int a[101];

string num2str(int n)
{
    string res = "";
    while (n)
    {
        int tmp = n % 10;
        char c = tmp + '0';
        res = c + res;
        n /= 10;
    }
    return res;
}

string strplus(string a, string b)
{
    string res = "";
    int lena = a.length();
    int lenb = b.length();
    string c;
    int len;
    if (lena > lenb)
    {
        int tmp = lena - lenb;
        c.resize(tmp, '0');
        b = c + b;
        len = lena;
    }
    else
    {
        int tmp = lenb - lena;
        c.resize(tmp, '0');
        a = c + a;
        len = lenb;
    }
    int flag = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        int tp = a[i] + b[i] + flag - '0' - '0';
        flag = tp / 10;
        int tt = tp % 10;
        char c = tt + '0';
        res = c + res;
    }
    if (flag != 0)
        res = '1' + res;
    return res;
}

void reverse_data(string &data)
{
    char temp = '0';
    int start = 0;
    int end = data.size() - 1;

    while (start < end)
    {
        temp = data[start];
        data[start++] = data[end];
        data[end--] = temp;
    }
}

void compute_value(string lhs, string rhs, string &result)
{
    reverse_data(lhs);
    reverse_data(rhs);
    int i = 0, j = 0, res_i = 0;
    int tmp_i = 0;
    int carry = 0;

    for (i = 0; i != lhs.size(); ++i, ++tmp_i)
    {
        res_i = tmp_i;
        for (j = 0; j != rhs.size(); ++j)
        {
            carry += (result[res_i] - '0') + (lhs[i] - '0') * (rhs[j] - '0');
            result[res_i++] = (carry % 10 + '0');
            carry /= 10;
        }
        while (carry)
        {
            result[res_i++] = (carry % 10 + '0');
            carry /= 10;
        }
    }
    for (int i = result.size() - 1; i >= 0; i--)
    {
        if (result[i] != '0')
            break;
        else
            result.pop_back();
    }

    reverse_data(result);
}

void init()
{
    a[1] = 2;
    for (int i = 2; i <= 100; i++)
    {
        if (i % 3 == 0)
            a[i] = i / 3 * 2;
        else
            a[i] = 1;
    }
}

int count_num(string s)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        count += s[i] - '0';
    }
    return count;
}

int main()
{
    memset(a, 0, sizeof(a));
    init();

    string n = num2str(a[100]);
    string d = "1";
    int i = 99;
    while (i)
    {
        string tmp = d;
        string aa = num2str(a[i]);
        string tmp1(aa.length()+d.length(),'0');
        compute_value(aa, d, tmp1);
        d = strplus(n, tmp1);
        n = tmp;
        i--;
    }

    //cout << n << " " << d << endl;
    cout << count_num(d) << endl;
    system("pause");
    return 0;
}
