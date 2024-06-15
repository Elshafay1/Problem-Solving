#include <iostream>
using namespace std;

void right_max(int arr[], int len)
{
    if (len == 1)
        return;

    right_max(arr + 1, len - 1);
    arr[0] = max(arr[0], arr[1]);
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
