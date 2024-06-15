#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    string code = "YZIMNESTODUAPWXHQFBRJKCGVL";
    string diget = "!@#$%^&*()";
    cin >> str; // acMNmn39
    int size = str.size();

    for (int i = 0; i < size; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            cout << code[str[i] - 'a'];
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            cout << str[i];
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            cout << diget[str[i] - '0'];
        }
    }
}
