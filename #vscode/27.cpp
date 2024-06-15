#include <iostream>
using namespace std;

int main()
{
    int n, s = 0;
    cin >> n;

    while (n>0)
    {
        if (s % 4 != 0)
        {
            cout << s << " ";
            n--;
        }

        s += 3;
    }
}
