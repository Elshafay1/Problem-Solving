#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n > 0)
    {
        string s;
        cin >> s;

        if (s == "no" || s == "No" || s == "nO" || s == "NO" ||
            s == "on" || s == "On" || s == "oN" || s == "ON")
        {
            cout << s << " ";
        }

        n--;
    }
}
