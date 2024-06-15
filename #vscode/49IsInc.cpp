#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int arr[n];
    bool isInc = 1;
    // inserting
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr[i] = x;
    }

    // process

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= arr[i + 1])
        { 
            isInc = 0;
            break;
        }
    }


    if (isInc)
        cout << "YES";
    else
        cout << "NO";
}
