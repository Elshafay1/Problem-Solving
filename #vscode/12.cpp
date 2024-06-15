
#include <iostream>
using namespace std;

int main()
{
    // 2 3 1

    int a, b, c, t;
    cin >> a >> b >> c;

    if (a > b)
    {
        t = a;
        a = b;
        b = t;
    }
    if (b > c)
    {
        t = b;
        b = c;
        c = t;

        if (a > b)
        {
            t = a;
            a = b;
            b = t;
        }
    }
}

// int main()
// {
//     int a, b, c,
//         t1 = c,
//         t2 = c,
//         t3 = c;
//     cin >> a >> b >> c;

//     if (a<b && a<c)
//         t1=a;
//     else if (b<a && b<c)
//         t1=;
//     else if (aeven == 0 && beven == 1)
//         cout << a + b;
//     else
//         cout << a - b;
// }
