#include <iostream>
using namespace std;

void fun(int arr[])
{
    bool pal = 1;

    int marr = arr.size() / 2;
    int endarr = arr.size() - 1;

    for (int i = 0; i < harr; i++)
    {
        if (arr[i] != arr[endarr])
        {
            pal = 0;
            break;
        }
        endarr++;
    }
    if (pal)
    {
        cout << "YES";
        cout << "NO";
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    fun(arr);
}