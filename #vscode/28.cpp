#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T > 0)
    {
        int N,
            pos = 0,
            result;
        cin >> N;

        while (pos < N)
        {
            int value;
            cin >> value;

            if (pos == 0)
                result = value;
            else if (result > value)
                result = value;

            pos++;
        }

        cout << "result is :" << result << endl;

        --T;
    }
}
