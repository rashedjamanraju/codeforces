// https://codeforces.com/problemset/problem/785/A
#include <iostream>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    int result = 0;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        if (s[0] == 'D')
        {
            result += 12;
        }
        if (s[0] == 'T')
        {
            result += 4;
        }
        if (s[0] == 'C')
        {
            result += 6;
        }
        if (s[0] == 'O')
        {
            result += 8;
        }
        if (s[0] == 'I')
        {
            result += 20;
        }
    }
    cout << result << endl;
    return 0;
}