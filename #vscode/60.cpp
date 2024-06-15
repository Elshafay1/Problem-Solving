#include <bits/stdc++.h>
using namespace std;

int main()
{
    int index;
    cin >> index;
    const int N = index + 1;
    int sequence[N] = {0};
    // inserting
    bool occurrence[N * 10] = {0};

    // for (int i = 0; i <= index; i++)
    // {
    //     int cur = sequence[i] - i - 1;

    //     if (!occurrence[cur] && cur > 0)
    //         sequence[i + 1] = sequence[i] - i - 1;
    //     else
    //         sequence[i + 1] = sequence[i] + i + 1;
    //     occurrence[sequence[i + 1]] = 1;

    //     // cout << sequence[i] << "  ";
    // }


    for (int i = 0; i <= index; i++)
    {
        int cur = sequence[i] - i - 1;

        if (!occurrence[cur] && cur > 0)
            sequence[i + 1] = sequence[i] - i - 1;
        else
            sequence[i + 1] = cur;
        occurrence[sequence[i + 1]] = 1;

        // cout << sequence[i] << "  ";
    }
    // cout << endl;
    // for (int i = 0; i <= 500; i++)
    // {

    //     cout<< occurrence[i] << "  ";
    // }
    cout << index << "   " << sequence[index];
}
