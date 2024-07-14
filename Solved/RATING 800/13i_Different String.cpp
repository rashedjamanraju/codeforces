// https: // codeforces.com/problemset/problem/1971/B
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    string res[t];
    int st[t];
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        string f = s;
        for (int j = 0; j < f.length(); j++)
        {
            for (int k = j + 1; k < f.length(); k++)
            {
                char temp = f[j];
                f[j] = f[k];
                f[k] = temp;
                if (f != s)
                {
                    st[i] = 1;
                    res[i] = f;
                    break;
                }
                else
                {
                    f = s;
                }
            }
            if (f != s)
            {
                break;
            }
        }
    }
    for (int i = 0; i < t; i++)
    {
        if (st[i] == 1)
        {
            cout << "YES\n"
                 << res[i] << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}