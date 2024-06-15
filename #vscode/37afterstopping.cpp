#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,
        b,
        ms;
    cin >> n;

    int mn = (n + 1) / 2;

    for (int v = 1; v <= n; v++)
    {
        // space before
        if (v <= mn)
            b = v - 1;
        else
            b = n - v;

        for (int i = 0; i < b; i++)
        {
            cout << " ";
        }

        //*
        cout << "*";

        // middle space
        if (v < mn)
            ms = n - 2 * v;
        else if (v > mn)
            ms = n - 2 * ((n - v) + 1);
        else if (v == mn)
            ms = 0;

        for (int i = 0; i < ms; i++)
        {
            cout << " ";
        }

        // final *

        if (v != mn)
        {
            cout << "*";
        }
        cout <<endl;


    }
}
