#include <bits/stdc++.h>
using namespace std;
// 2 3 5 7 2  4 1 2 3 4
 
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;

        int pos = 1,
            sum = 0;

        while (pos <= n)
        {
            int value;
            cin >> value;

            int pow = 1,
                times = pos;
            while (times > 0)
            {
                pow *= value;

                times--;
            }
            sum += pow;

            pos++;
        }
        cout << sum << endl;

        t--;
    }
}
