// https: // codeforces.com/contest/266/problem/B
#include <iostream>
#include <string>
using namespace std;
int main()
{
    unsigned short int n = 0u, t = 0u;
    cin >> n >> t;
    string s;
    cin >> s;
    if (s.length() == n)
    {
        for (int i = 0; i < t; i++)
        {
            for (int j = 0; j < s.length(); j++)
            {
                if (s[j] == 'B')
                {
                    if (s[j + 1] == 'G')
                    {
                        int temp = s[j + 1];
                        s[j + 1] = s[j];
                        s[j] = temp;
                        j++;
                    }
                }
            }
        }
        cout << s << endl;
        return 0;
    }
}