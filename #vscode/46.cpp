#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr[i] = x;
    }

    for (int i = 0; i < n / 2; i++)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
}
