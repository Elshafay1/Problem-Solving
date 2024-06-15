#include <iostream>
using namespace std;

string reverse_str(const string & str)
{

    string ret = str;
    int s = 0, e = str.size() - 1;

    while (s < e)
    {
        int temp = ret[s];
        ret[s] = ret[e];
        ret[e] = temp;

        s++;
        e--;
    }
    return ret;
}

int main()
{
    cout << reverse_str("hello");
}
