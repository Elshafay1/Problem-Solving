#include <iostream>
using namespace std;

string reverse_str(const string &str)
{
    string oldstr = str;
    string newstr = oldstr;
    for (int i; i < oldstr.size(); i++)
    {
        newstr[i] = oldstr[oldstr.size() - i - 1];
    }
    return newstr;
}

int main()
{
    cout << reverse_str("hello");
}
