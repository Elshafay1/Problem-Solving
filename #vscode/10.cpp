
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n < 10000)
    {
        cout << "this is a small number";
    }
    else
    {
        int t1, t2, t3, sum;

        t1 = n % 10;
        t2 = n / 10 % 10;
        t3 = n / 100 % 10;
        sum = t1 + t2 + t3;

        if (sum % 2 != 0)
        {
            cout << "this is a great number";
        }
        else
        {
            bool odd_flag = (t1 % 2 != 0 || t2 % 2 != 0 || t3 % 2 != 0);
            if (odd_flag)
            {
                cout << "this is a good number";
            }
            else
            {
                cout << "this is a bad number";
            }
        }
    }
}
