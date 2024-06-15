#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int feq_arr[771] = {0};
    // inserting
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        x += 500;
        feq_arr[x]++;
    }

    // process
    int max_pos = 0;
    for (int i = 0; i < 771; i++)
    {
        if (feq_arr[max_pos] < feq_arr[i])
            max_pos = i;
    }

    cout<< max_pos-500<<"  repeated  "<<feq_arr[max_pos];
}
