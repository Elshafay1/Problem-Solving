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
    int max = arr[0] + arr[1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (max < arr[i] + arr[j] && i != j)
            {

                max = arr[i] + arr[j];
            }
        }
    }

    cout << "max " << max ;
}
