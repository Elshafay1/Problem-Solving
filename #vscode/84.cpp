#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    {
        int upper = 0;
        int r = n, c = n;

        int s = 0;
        for (int i = 0; i < r; i++)
        {
            for (int j = s; j < c; j++)
            {
              
                upper += arr[i][j];
            }
            s++;
        }

        cout << "\n upper is: " << upper<<endl;
    }

    {
        int lower = 0;
        int e = 1;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < e; j++)
            {
                cout << arr[i][j] << " ";
                lower += arr[i][j];
            }
            if (e < n)
                e++;
        }

        cout << "\n lower is: " << lower;
    }
}
