#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N; // 12345

    int Number = 0;

    while (N > 0)
    {
        int lastdig = N % 10; // 5
        N /= 10;              // N=1234
        Number = Number * 10 + lastdig;

        
    }

    cout << Number << " " << Number * 3;
}
