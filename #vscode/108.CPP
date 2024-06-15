#include <iostream>
using namespace std;

bool starts_with(string input, string pattern, int pos)
{
    if (pattern.size() + pos > input.size())
        return false;

    for (int i = 0; i < pattern.size(); i++)
    {
        if (input[pos + i] != pattern[i])
            return false;
    }

    return true;
}
//                ("aabcabaaad",     "aa"      , "x")
string replace_str(string input, string pattern, string to)
{
    string ret = "";

    for (int pos = 0; pos < input.size(); pos++)
    {
        if (starts_with(input, pattern, pos))
        {
            ret += to;
            pos += pattern.size() - 1;
        }
        else
        {
            ret += input[pos];
        }
    }
    return ret;
}

int main()
{
    cout << starts_with("aabcabaaad", "aa", 0) << "\n";
    cout << starts_with("aabcabaaad", "aa", 1) << "\n";
    cout << starts_with("aabcabaaad", "aabcabaaad", 0) << "\n";
    cout << starts_with("aabcabaaad", "baaad", 5) << "\n";
    cout << starts_with("aabcabaaad", "baaad", 4) << "\n";

    cout << replace_str("aabcabaaad", "aa", "x") << "\n";
    cout << replace_str("aabcabaaad", "aa", "aaaa") << "\n";
    cout << replace_str("aabcabaaad", "aa", "") << "\n";

    return 0;
}