#include <iostream>
using namespace std;

bool ispalindrome(int arr[], int start, int end)
{
    if (start >= end)
        return true;
    if (arr[start] != arr[end])
        return false;

  return  ispalindrome(arr, start + 1, end - 1);
}

int main()
{
    int arr[] = {1, 3, 5, 3, 1};

    cout << ispalindrome(arr, 0, 4);

    return 0;
}
