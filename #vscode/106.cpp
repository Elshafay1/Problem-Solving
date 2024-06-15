#include <iostream>
using namespace std;

int max(int n1, int n2, int n3)
{
    return max(n1, max(n2, n3));
}

int max(int n1, int n2, int n3, int n4)
{
    return max(n1, max(n2, n3, n4));
}

int max(int n1, int n2, int n3, int n4, int n5)
{
    return max(n1, max(n2, n3, n4, n5));
}

int max(int n1, int n2, int n3, int n4, int n5, int n6)
{
    return max(n1, max(n2, n3, n4, n5, n6));
}

int main()
{
    cout << max(1, 2, 3, 4, 5, 6);
    return 0;
}
