
#include <iostream>
using namespace std;

int main()
{
    // int a, b, c, m = -1;
    // cin >> a >> b >> c;

    // if (a < 100 && a > c && a > b)
    //     m = a;
    // else if (b < 100 && b > c && b > a)
    //     m = b;
    // else if (c < 100 && c > b && c > a)
    //     m = c;
    // cout<<m;

    int a, b, c, r = -1;
    cin >> a >> b >> c;

    if (a < 100 && a > r)
        r = a;
    if (b < 100 && b > r)
        r = b;
    if (c < 100 && c > r)
        r = c;
        
    cout << r;
}
