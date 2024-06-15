#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    cin >> str; // 111222aabbb

    for (int i = 0; i < str.size(); i++)
    {
        if (i != 0 && str[i] != str[i - 1])
        {
            cout << " ";
        }

        cout << str[i];
    }
}
