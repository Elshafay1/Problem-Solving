#include <bits/stdc++.h>
using namespace std;

int main()
{

    string input, str;
    cin >> input >> str;

    for (int i = 0; i <= input.size() - str.size(); i++)
    {
        bool is = 1;
        int k = 0;
        for (int j = i; j < i + str.size(); j++)
        {
            if (input[j] != str[k])
            {
                is = 0;
                break;
            }
            k++;
        }
        if (is)
        {
            cout << "Yes";
            return 0;
        }
    }
    cout << "NO";
}
