#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[3];

    // inserting
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;

        if (i < 3)
        {
            arr[i] = val;
        }
        else
        { // get max
            int max_pos = 0;
            for (int j = 1; j < 3; j++)
            {
                if (arr[max_pos] < arr[j])
                {
                    max_pos = j;
                }
            }
            // fire max
            if (arr[max_pos] > val)
            {
                arr[max_pos] = val;
            }
        }
    }

    //order 3 number assendgly

    //
}
