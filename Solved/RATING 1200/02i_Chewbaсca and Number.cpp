// https://codeforces.com/contest/514/problem/A
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string n = "";
    cin >> n;
    string res = "";
    char c = n[0];
    if (n.length() <= 18)
    {
        for (int i = 0; i < n.length(); i++)
        {
            if (n[i] != '1' && n[i] != '2' && n[i] != '3' && n[i] != '4')
            {
                int dig = (int)n[i] - (int)'0';
                char rev = (char)((9 - dig) + 30);
                res += rev;
            }
        }
        if (res[0] == '0')
        {
            res[0] = c;
        }
    }
    cout << res << endl;
    return 0;
}