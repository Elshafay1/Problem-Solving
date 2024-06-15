#include <iostream>
using namespace std;

int main()
{
    int arr[100][100] = {0};
    int r, c;
    cin >> r >> c;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    int temp, s = 1;

    for (int i = 0; i < r; i++)
    {
        for (int j = s; j < c; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
        s++;
    }
    cout << endl;
    cout << endl;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
