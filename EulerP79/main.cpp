
#include <vector>
#include <fstream>
#define make_int(c) (c - 48)

using namespace std;

vector<int> v_key;

void BuildKey(string s_key);
int find_loc(int);

int main()
{
    vector<string> keylog_rows;
    string line;

    ifstream keylog_file("C:/Users/s521059/CLionProjects/Euler Project/EulerP79/p079_keylog.txt");

    // Save each line
    while(getline(keylog_file, line))
        keylog_rows.push_back(line);

    // Create key to edit
    for(int i = 0; i < 10; i++)
    {
        if (i == 4 || i == 5) // Determined Manually
            continue;
        v_key.push_back(i);
    }


    // Iterate per row to 'build' key
    for(vector<string>::iterator it = keylog_rows.begin(); it != keylog_rows.end(); ++it)
        BuildKey(*it);

    // Output
    printf("Passcode: ");
    for(int i = 0; i < v_key.size(); i++)
        printf("%d", v_key.at(i));
    printf("\n");
    //timer.print();
    return 0;
}

void BuildKey(string s_key)
{
    const char * c_key;
    int p1,p2;
    bool b_notClear = false;
    do
    {
        b_notClear = false;
        c_key = s_key.c_str();
        for(int i = 0; i < 2; i++)
        {
            int i_key = make_int(*c_key);
            p1 = find_loc(make_int(*c_key));
            *c_key++;
            p2 = find_loc(make_int(*c_key));
            if(p1 > p2)
            {
                b_notClear = true;
                v_key.erase(v_key.begin() + p1);
                v_key.insert(v_key.begin() + p2, i_key);
            }
        }
    } while(b_notClear);

    return ;
}

int find_loc(int i_find)
{
    for(int i = 0; i < v_key.size(); i++)
    {
        if(v_key[i] == i_find)
            return i;
    }
    return 0;
}