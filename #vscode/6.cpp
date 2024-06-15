
#include <iostream>
using namespace std;

int main()
{

    int n, v1, v2, v3, sum;
    cin >> n;

    v1 = n % 10;
    cout << v1 << endl;
    v2 = n / 10 % 10;
    cout << v2 << endl;
    v3 = n / 100 % 10;
    cout << v3 << endl;

    sum = v1 + v2 + v3;
    cout << sum;
}
