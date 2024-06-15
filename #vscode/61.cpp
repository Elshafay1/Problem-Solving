#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, x;
    cin >> k >> n;
    int arr[n];
    // insertting
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr[i] = x;
    }

    // summation    
    int sum = 0, max = 0, first_index=0, second_index=2;
    const int lastpos = n - 2;

    for (int i = 0; i < lastpos; i++)
    {
        sum = arr[i] + arr[i + 1] + arr[i + 2];
        if (max < sum)
        {
            max = sum;
            first_index = i;
            second_index = i + 2;
        }
    }

    cout << first_index << " " << second_index << " " << max;
}
