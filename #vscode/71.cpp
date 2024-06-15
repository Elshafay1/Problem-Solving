#include <bits/stdc++.h>
using namespace std;

int main()
{

    string n;
    cin >> n; // 1 0 0;
    int gar = 0;
    int result = 0;
    for (int i = 0; i < n.size(); i++)
    {

        n[i] = n[i] - '0';

        gar += n[i];
        result = gar;
        // cout << gar << endl;
        gar *= 10;
    }
    cout << result<<" "<<result*3 ;
}
