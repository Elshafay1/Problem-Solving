#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x,
        seven = 0,
        ceven = 0,
        sodd = 0,
        codd = 0,
        odd = 0,
        even = 0;

    bool swit = 0;

    while (n > 0)
    {
        n--;
        cin >> x;

        if (swit)
        {
            seven += x;
            ceven++;
        }
        else
        {
            sodd += x;
            codd++;
        }
        swit=!swit;
    }

    if (codd == 0)
        odd = 0;
    else
        odd = sodd / codd;

    if (ceven == 0)
        even = 0;
    else
        even = seven / ceven;

    cout << odd << " " << even;
}