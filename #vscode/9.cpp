
#include <iostream>
using namespace std;

int main()
{
    int n=0, y=0, m=0;
    cin >> n;

    y = n / 360;
    n %= 360;

    m = n / 30;
    n %= 30;

    cout<<y<<" "<<m<<" "<<n;
}
