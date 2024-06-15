#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;int x;
    cin >> n;
    // inserting
    int frq_arr[10] = {0};

    for (int i = 0; i < n; i++)
    {
        
        cin >> x;
        if (x == 0)
        {
            frq_arr[0]++;
        }
        while (x > 0)
        {
            int val = x % 10;
                frq_arr[val]++;

            cout << "val " << val << "      arr " << frq_arr[val] << "          x " << x << endl;
            x /= 10;
        }
    }

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << i << " " << frq_arr[i] << endl;
    // }
}
