#include <iostream>
using namespace std;

void arrayinc(int arr[], int len)
{
    if (len == 0)
        return;
        
    arrayinc(arr, len - 1);
    cout << arr[len - 1] + len - 1 << " ";
}

int main()
{
    int arr[] = {1, 8, 2, 10, 3};

    arrayinc(arr, 5);

    return 0;
}
