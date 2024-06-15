#include <iostream>
using namespace std;

void right_max(int arr[], int len, int startpos = 2)
{
    if (startpos == len - 1)
        return;

    right_max(arr, len, startpos + 1);
    arr[startpos] = max(arr[startpos], arr[startpos + 1]);
}

int main()
{
    int arr[] = {1, 3, 5, 7, 4, 2};

    right_max(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
