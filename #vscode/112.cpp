#include <iostream>
using namespace std;

void sequence(int n)
{
    cout << n << " ";
    if (n == 1)
        return;
    if (n % 2 == 0)
        sequence(n / 2);
    else
        sequence(n * 3 + 1);
}

int main()
{
    sequence(6);
    return 0;
}
