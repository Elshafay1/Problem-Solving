#include <iostream>
using namespace std;

int sum_arr_to(int array[], int l)
{
    int sum = 0;
    for (int i = 0; i < l; i++)
    {
        sum += array[i];
    }
    return sum;
}

int main()
{
    int arrnum[6] = {1, 2, 3, 4, 5, 6};
    cout << sum_arr_to(arrnum, 4);
    return 0;
}
