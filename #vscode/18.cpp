#include <iostream>
using namespace std;

int main()
{
   int s1, e1, s2, e2;
   cin >> s1 >> e1 >> s2 >> e2;

   if (e1 < s2 || e2 < s1)
   {
      cout << -1;
   }
   else
   {
      if (s2 < s1)
         s2 = s1;
      if (e2 > e1)
         e2 = e1;
      cout << s2 << " " << e2;
   }
}