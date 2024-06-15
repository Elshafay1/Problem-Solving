#include <iostream>
using namespace std;

int main()
{
    int n,
        r = 1,
        last = 1,
        c = 1,
        s;
    cin >> n;

    while (r <= n)
    {

        s = n - r;
        while (s > 0)
        {
            cout << " ";
            s--;
        }

        r++;
        int c = 1;
        while (c <= last)
        {

            cout << "*";
            c++;
        }
        last = last + 2;

        cout << endl;
    }
    r--;
    while (r > 0)
    {
        s = n - r;
        while (s > 0)
        {
            cout << " ";
            s--;
        }

        r--;
        c = 1;
        last -= 2;

        while (c <= last)
        {
            cout << "*";
            c++;
        }
        cout << endl;
    }
}