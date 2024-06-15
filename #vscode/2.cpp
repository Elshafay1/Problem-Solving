#include <iostream>
using namespace std;

int main()
{

    float a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    float avg = (a + b + c + d + e) / 5;
    cout << avg << endl;

    cout << (a + b + c) / (d + e) << endl;

    cout << ((a + b + c) / 3) / ((d + e) / 2) << endl;
}
