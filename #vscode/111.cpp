#include <iostream>
using namespace std;

void Print_triangle(int n)
{
    if (n == 0)
        return;

    Print_triangle(n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << "*";
    }
    cout << "\n";
}

int main()
{
    Print_triangle(6);
    return 0;
}
