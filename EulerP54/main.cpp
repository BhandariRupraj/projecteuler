#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

bool same_suit(char s[5])
{
    if (s[0] == s[1] && s[1] == s[2] && s[2] == s[3] && s[3] == s[4])
        return true;
    else
        return false;
}

int cv(char a)
{
    if (a >= '2'&&a <= '9')
        return a - '2';
    else if (a == 'T')
        return 8;
    else if (a == 'J')
        return 9;
    else if (a == 'Q')
        return 10;
    else if (a == 'K')
        return 11;
    else
        return 12;
}

void ch_int(char a[5][2],int ac[5])
{
    for (int i = 0; i < 5; i++)
    {
        int tmp = cv(a[i][0]);
        ac[i] = tmp;
    }
}

int high_card(int ac[5],char s[5])
{
    return ac[4];
}

int one_pair(int ac[5],char s[5])
{
    int count = 0;
    for (int i = 5; i >= 1; i--)
    {
        if (ac[i] == ac[i - 1])
            return ac[i];
    }
    return -1;
}

int two_pair(int ac[5],char s[5])
{
    vector<int>res;
    int count = 0;
    for (int i = 1; i < 5; i++)
    {
        if (ac[i] == ac[i - 1])
        {
            res.push_back(ac[i]);
            i++;
        }
    }
    if (res.size() == 2)
        return res[0] + res[1] * 13;
    else
        return -1;
}

int three_kind(int ac[5],char s[5])
{
    int count = 0;
    for (int i = 2; i < 5; i++)
    {
        if (ac[i - 2] == ac[i - 1] && ac[i - 1] == ac[i])
            return ac[i - 2];
    }
    return -1;
}

int straight(int ac[5],char s[5])
{
    if (ac[0] == 0 && ac[1] == 1 && ac[2] == 2 && ac[3] == 3 && ac[4] == 12)
        return ac[3];
    for (int i = 1; i < 5; i++)
    {
        if (ac[i] != ac[i - 1] + 1)
            return -1;
    }
    return ac[4];
}

int flush(int ac[5],char s[5])
{
    if (same_suit(s))
        return ac[4];
    return -1;
}

int full_house(int ac[5],char s[5])
{
    if (ac[0] == ac[1] && ac[2] == ac[3] && ac[3] == ac[4])
        return ac[0] + ac[4] * 13;
    if (ac[0] == ac[1] && ac[1] == ac[2] && ac[3] == ac[4])
        return ac[4] + ac[0] * 13;
    return -1;
}

int four_kind(int ac[5],char s[5])
{
    if ((ac[0] == ac[1] && ac[1] == ac[2] && ac[2] == ac[3]) || (ac[1] == ac[2] && ac[2] == ac[3] && ac[3] == ac[4]))
        return ac[2];
    return -1;
}

int strai_flush(int ac[5],char s[5])
{
    int tmp = straight(ac,s);
    if (same_suit(s) && tmp >= 0)
        return ac[4];
    return -1;
}

int royal_flush(int ac[5], char s[5])
{
    int tmp = strai_flush(ac, s);
    if (tmp >= 0 && ac[4] == 12)
        return ac[4];
    return -1;
}

int compareHighest(int ac[5], int bc[5])
{
    for (int i = 4; i >= 0; i--)
    {
        if (ac[i] > bc[i])
            return 1;
        if (ac[i] < bc[i])
            return 2;
    }
}

int comp(int ac[5], int bc[5], char as[5], char bs[5])
{
    int(*compareList[10])(int *, char *) = { high_card, one_pair, two_pair, three_kind, straight, flush, full_house, four_kind, strai_flush, royal_flush };
    for (int i = 9; i >= 0; i--)
    {
        int pa = (*compareList[i])(ac, as);
        int pb = (*compareList[i])(bc, bs);

        if (pa != -1 || pb != -1)
        {
            if (pa == -1)
                return 2;
            if (pb == -1)
                return 1;
            if (pa > pb)
                return 1;
            if (pa < pb)
                return 2;
            if (pa == pb)
                return compareHighest(ac, bc);
        }

    }
}

int main()
{
    ifstream input;
    input.open("C:\\Users\\s521059\\CLionProjects\\Euler Project\\EulerP54\\p054_poker.txt");
    string s;
    int ct = 0;
    while (getline(input, s))
    {
        char a[5][2];
        char b[5][2];
        int count = 0;
        int flag = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
            {
                count++;
                if (count>4)
                {
                    if (flag == 0)
                        flag = 1;
                    count -= 5;
                }
            }
            else
            {
                if (flag == 0)
                {
                    a[count][0] = s[i++];
                    a[count][1] = s[i];
                }
                else
                {
                    b[count][0] = s[i++];
                    b[count][1] = s[i];
                }
            }
        }

        int ac[5], bc[5];
        char as[5], bs[5];
        for (int i = 0; i < 5; i++)
        {
            a[i][1] = as[i];
            b[i][1] = bs[i];
        }
        ch_int(a, ac);
        ch_int(b, bc);
        sort(ac, ac + 5);
        sort(bc, bc + 5);

        if (comp(ac, bc, as, bs) == 1)
            ct++;
    }
    cout << ct << endl;
    system("pause");
    return 0;
}
