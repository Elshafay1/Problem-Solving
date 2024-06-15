#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s1, s2;
    cin >> s1 >> s2;
    int size1 = s1.size();
    int size2 = s2.size();

    int m = size1;
    int l = size2;
    string top = s1;
    if (size1 < size2)
    {
        m = size2;
        l = size1;
        top = s2;
    }

    for (int i = 0; i < m; i++)
    {
        if (i < size1)
        {
            cout << s1[i];
        }
        if (i < size2)
        {
            cout << s2[i];
        }
    }
    // for (int i = 0; i < m; i++)
    // {
    //     if (i < l)
    //     {
    //         cout << s1[i] << s2[i];
    //     }else
    //     {
    //         cout << top[i];
    //     }
    // }
}
