
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    bool aeven = (a % 2 == 0);
    bool beven = (b % 2 == 0);

    if (!aeven && !beven)
        cout << a * b;
    else if (aeven && beven)
        cout << a / b;
    else if (!aeven && beven)
        cout << a + b;
    else
        cout << a - b;
}
