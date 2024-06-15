#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int arr[n];
    // insertting
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr[i] = x;
    }

   
    int sub_inc = n;
    cout << "l1 " << sub_inc << endl;

    // len2
    sub_inc = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] < arr[i + 1])
            sub_inc++;
    }
    cout << "l2 " << sub_inc << endl;
    sub_inc = 0;

    // len3
    for (int i = 0; i < n - 2; i++)
    {
        if (arr[i] < arr[i + 1] && arr[i + 1] < arr[i + 2])
            sub_inc++;
    }
    cout << "l3 " << sub_inc << endl;
    sub_inc = 0;

    // len4
    for (int i = 0; i < n - 3; i++)
    {
        if (arr[i] < arr[i + 1] && arr[i + 1] < arr[i + 2] && arr[i + 2]< arr[i + 3])
            sub_inc++;
    }
    cout << "l4 " << sub_inc << endl;

    // cout << sub_inc;
}
