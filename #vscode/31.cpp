#include <iostream>
using namespace std;

int main()
{
    int n, m, nc = 1;

    cin >> n >> m;

    while (nc <= n)
    {

        int mc = 1;
        while (mc <= m)
        {
            cout << nc << "x" << mc << "=" << nc * mc << endl;
            mc++;
        }

        nc++;
    }
}
