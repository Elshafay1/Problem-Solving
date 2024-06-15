#include <iostream>
using namespace std;

int sufmax(int arr[], int len, int cnt)
{
    if (cnt == 0)
        return 0;

    return arr[len - 1] + sufmax(arr, len-1, cnt - 1);
}

int main()
{
    int arr[] = {1, 3, 5, 7, 4, 2};

    cout << sufmax(arr, 6, 3);

    return 0;
}
