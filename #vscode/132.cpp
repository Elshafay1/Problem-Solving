#include <iostream>
using namespace std;

bool isprefix(string main, string prefix, int pos = 0)
{
    if (pos == prefix.size())
        return true;

    if (main[pos] != prefix[pos])
        return false;

    return isprefix(main, prefix, pos + 1);
}

int main()
{
    string main = "abcdefgh";
    string prefix = "abcd";

    cout << isprefix("abcdefgh", "abcd", 0);

    return 0;
}
