#include <bits/stdc++.h>
using namespace std;

int main()
{
    int counter = 0;

    for (int x = 50; x <= 300; x++)
    {
        for (int y = 70; y <= 400; y++)
        {
            if (x < y && (x + y) % 7 == 0)
            {
                counter++;
            }
        }
    }

    cout << counter;
}
