#include <bits/stdc++.h>
using namespace std;

int main()
{
    int di[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dj[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    

    for (int k = 0; k < 8; k++)
    {
        cout << r + di[k] << " " << c + dj[k] << endl;
    }
}
