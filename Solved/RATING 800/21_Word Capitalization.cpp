// https://codeforces.com/contest/281/problem/A
#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (s.length() <= 1000)
    {
        if (s[0] >= 'a' && s[0] <= 'z')
        {
            s[0] = (char)((int)s[0] - 32);
        }
    }
    cout << s << endl;
    return 0;
}