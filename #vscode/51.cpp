// replace max min
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int arr[n];

    // inserting
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr[i] = x;
    }

    // process

    for (int i = 0; i < n; i++)
    {
         if (arr[i] != arr[i + 1])
        {
            cout <<i <<" : "<<arr[i] << "\n";
        }
    }
}
