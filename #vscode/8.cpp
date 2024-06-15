
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool even = (n % 2 == 0);
    bool odd = 1 - even;

    int v = even * 100 + odd * 7;

    cout << v;
}
