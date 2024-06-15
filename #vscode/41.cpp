#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sSpace;
    cin >> sSpace;

    if (sSpace >= 2)
    {
        cout << 2;
    }

    for (int x = 3; x <= sSpace; x++)
    {
        bool isPrime = 1;
        int h = x / 2;

        for (int i = h; i >= 2; i--)
        {
            if (x % i == 0)
            {
                isPrime = 0;
            }
        }

        if (isPrime == 1)
        {
            cout << "," << x;
        }
    }
}
