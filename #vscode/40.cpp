#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,l;
    cin >> n;

    int h = n / 2;
    string result="yes";

    for (int a = h; a >= 2; a--)
    {
        if(n%a==0){
            result="no";
            l=a;
            break;
        }
    }
    
    cout<<result<<endl<<l;
}
