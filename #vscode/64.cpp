#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 97
    // 122

    string letters;
    cin >> letters; // KaOhSmMeKd
    int size = letters.size();
    int frqarr[123] = {0};

    for (int i = 0; i < size; i++)
    {
        if (letters[i] >= 'a' && letters[i] <= 'z')
        {
            frqarr[letters[i]]++;
        }
    }
    for (int i = 97; i <= 122; i++)
    {
        if (frqarr[i])
        {
            cout << (char)i << " " << frqarr[i]<<"\n";
        }
    }
}
