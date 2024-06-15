#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    cin >> str; // ccccdddexxxxxxxx
    int store;

    for (int i = 0; i < str.size(); i++)
    {
        if (i == 0)
        {
            cout << str[0];
            store = 1;
        }
        else if (str[i] == str[i - 1])
        {
            store++;
        }
        else if (str[i] != str[i - 1])
        {

            cout << store << "_";

            cout << str[i];
            store = 1;
        }
    }
    cout << store;
}
