#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    cin >> str; // 111222aabbb

    int arr[150] = {0};

    for (int i = 0; i < str.size(); i++)
    {
        arr[(int)str[i]]++;
    }

    for (int i = 0; i < 150; i++)
    {
        if (arr[i] != 0)
        {
            for (int j = 0; j < arr[i]; j++)
            {
                cout << (char)i;
            }
            cout << endl;
        }
    }
}
