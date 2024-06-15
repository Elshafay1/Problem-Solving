#include <iostream>
using namespace std;

bool is_lower(const string &str)
{
    for (int i = 0; i < str.size(); ++i)
    {
        bool lower = str[i] >= 'a' && str[i] <= 'z';
        if (!lower)
            return false;
    }
    return true;
}

int main()
{

    cout << is_lower("abc")<<endl;
    cout << is_lower("abC")<<endl;
}
