#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    double v = ((double)a / b) - (a / b);

    cout << v*b;
}
