#include <iostream>
using namespace std;

void inc(int a, int &b)
{
    a++;
    b++;
}

int main()
{
    cout << "enter a number two values \n";
    int n1, n2;
    cin >> n1 >> n2;
    inc(n1, n2);
    cout << n1 << " " << n2;

    return 0;
}
