
#include <iostream>
using namespace std;

int main()
{

    int n, v1, v2, v3, sum;
    cin >> n; // 1234

    v1 = n % 10; // 4
    n /= 10;     // 123
    v2 = n % 10; // 3
    n /= 10;     // 12
    v3 = n % 10; // 2
    n /= 10;     // 1

    sum = v1 + v2 + v3;
    cout << sum << endl;
    cout << n;
}
