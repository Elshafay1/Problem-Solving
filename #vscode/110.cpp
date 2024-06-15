#include <iostream>
using namespace std;

void Print_triangle(int n)
{
    if (n == 0)
        return;

    for (int i = 0; i < n; i++)
    {
        cout << "*";
    } cout << "\n";

    Print_triangle(n - 1);
}

int main()
{
    Print_triangle(6);
    return 0;
}
