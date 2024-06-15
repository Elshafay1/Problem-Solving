#include <iostream>
using namespace std;

double average(int arr[], int len)
{
    if (len == 1)
        return arr[0];

    double sub_result = average(arr, len - 1);
    sub_result = sub_result * (len - 1);

    return (arr[len - 1] + sub_result) / len;
}

int main()
{
    int arr[] = {1, 8, 2, 10, 3};

    cout << average(arr, 5);

    return 0;
}
