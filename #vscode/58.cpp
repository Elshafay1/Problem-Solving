#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    // inserting

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
    }

    // check array 0==>allow , not used
    bool check[501]={0} ;

    for (int i = 0; i < n; i++)
    {
        if (check[arr[i]]==0)
        {
            cout << arr[i]<<" ";
            check[arr[i]] = 1;
        }
    }
    
    
    
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<check[i]<<" ";
    // }
}
