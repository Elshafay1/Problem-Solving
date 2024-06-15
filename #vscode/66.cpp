#include <bits/stdc++.h>
using namespace std;

int main()
{
    string from = "abcdefghijklmnopqrstuvwxyz0123456789";
    string to = "YZIMNESTODUAPWXHQFBRJKCGVL!@#$%^&*()";
    char arr[150] = {0};

    for (int i = 0; i < from.size(); i++)
    {
        arr[from[i]] = to[i];
    }

    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            continue;

        str[i] = arr[str[i]];
    }
    cout<<str;
}
