#include <bits/stdc++.h>
using namespace std;

int main()
{

    string input, str;
    cin >> input >> str;

    int arr[150] = {0};
    int q = 1;
    for (int i = 0; i < input.size(); i++)
    {
        arr[input[i]] = q;
        q++;
    }

    for (int i = 1; i < str.size(); i++)
    {
        if (arr[str[i]] <= arr[str[i - 1]])
        {
            
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
