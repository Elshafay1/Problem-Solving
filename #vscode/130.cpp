#include <iostream>
using namespace std;

int prefixsum(int arr[], int len, int cnt)
{
    if (cnt == 0)
        return 0;

    return arr[cnt-1] + prefixsum(arr, len, cnt - 1);
}

int main()
{
    int arr[] = {1, 3, 5, 7, 4, 2};

    cout << prefixsum(arr, 6, 3);

    return 0;
}
