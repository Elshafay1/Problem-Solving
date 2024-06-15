#include <bits/stdc++.h>
using namespace std;

int main()
{

    string input, str;
    cin >> input >> str;

    for (int i = 0; i < str.size(); i++)
    {
        if (input[i + input.size() - str.size()] != str[i])
        {
            cout << "NO";

            return 0;
        }
    }

    cout << "YES";
}
