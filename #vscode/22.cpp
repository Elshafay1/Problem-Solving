#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cin >> r;

    while (r > 0)
    {
        c = r;
        while (c >0)
        {
            cout << "*";
            c--;
        }
        cout << endl;

        r--;
    }
}