#include <iostream>
using namespace std;

void acc_arr(int arr[], int len)
{
    if (len == 1)
        return;

    acc_arr(arr, len - 1);

    arr[len - 1] += arr[len - 2];
    
}

int main()
{
    int arr[] = {1, 8, 2, 10, 3};

    acc_arr(arr, 5);
    for (int i = 0; i < 5; i++)
    {cout << arr[i] << " ";
    }

    return 0;
}
