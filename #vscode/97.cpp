#include <iostream>
using namespace std;

int max(int a, int b, int c)
{
    return max(a, max(b, c));
}

int max(int a, int b, int c, int d)
{
    return max(a, max(b, c, d));
}

int max(int a, int b, int c, int d, int e)
{
    return max(a, max(b, c, d, e));
}

int max(int a, int b, int c, int d, int e, int f)
{
    return max(a, max(b, c, d, e, f));
}

int main()
{
    cout<<max(1,2,3,4,5,6);
}
