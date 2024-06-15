#include <iostream>
using namespace std;

// aabxbaax  aa

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

string replace_str(string input, string pattern, string to)
{
    string res = "";

    for (int pos = 0; pos < input.size(); pos++)
    {
        if (starts_with(input, pattern, pos))
        {
            res += to;
            pos += pattern.size() - 1;
        }
        else
        {
            res += input[pos];
        }
    }
    return res;
}

int main()
{
    cout <<  replace_str("aabxbaax", "aa", "zz");
}
