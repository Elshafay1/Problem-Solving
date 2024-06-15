#include <iostream>
using namespace std;

int main()
{
    int n, r = 0, c;
    cin >> n;

    while (r <= n)
    {
        c = 0;
        while (c < r)
        {
            cout << "*";
            c++;
        }
        cout << endl;

        r++;
    }
}