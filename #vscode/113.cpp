#include <iostream>
using namespace std;

int lengthof_sequence(int n)
{

    if (n == 1)
        return 1;
    if (n % 2 == 0)
        return 1 + lengthof_sequence(n / 2);

    return 1 + lengthof_sequence(n * 3 + 1);
}

// 6 3 10 5 16 8 4 2 1

int main()
{
    cout << lengthof_sequence(6);
    return 0;
}
