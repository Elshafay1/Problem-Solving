#include <iostream>
using namespace std;

int abs(int n)
{
    if (n < 0)
    {
        n = -n;
    }
    return n;
}
int main()
{
    cout << "enter a number \n";
    int vum;
    cin >> vum;
    cout << abs(vum);
}
