#include <iostream>
using namespace std;

string reverse_str(const string &str)
{
    string ret = str;
    int st = 0, en = str.size() - 1;

    while (st < en)
    {
        int temp = ret[st];
        ret[st] = ret[en];
        ret[en] = temp;

        st++;
        en--;
    }
    return ret;
}

int main()
{
    cout << reverse_str("abcd") << endl;
    return 0;
}
