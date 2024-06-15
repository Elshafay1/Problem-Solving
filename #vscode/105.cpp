#include <iostream>
using namespace std;

string replace_str(string input, string pattern, string to)
{
    for (int i = 0; i < input.size(); i++)
    {
        for (int j = 0; j < pattern.size(); j++)
        {
            int k = i;
            if (input[k++] != pattern[j])
            {
                break;
            }
        }
    }
}

int main()
{
}
