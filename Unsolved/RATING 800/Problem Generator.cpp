// https://codeforces.com/problemset/problem/1980/A
#include <iostream>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    int result[t];
    for (int i = 0; i < t; i++)
    {
        char allChar[7] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s; // BGECD(0-4) CBDED(5-9)
        int k = 0;
        int count = 0;
        int score = 0;
        int init = 0; // 5
        if (s.length() == n)
        {
            for (int j = 0; j < 7 && k < n; j++)
            {
                int stat = 0;
                for (; k < n && count < (n / m); k++)
                {
                    if (allChar[j] == s[k])
                    {
                        stat = 1;
                    }
                    count++; // 5
                    init++;  // 5
                }
                if (stat == 0)
                {
                    score++;
                }
                count = 0;
                if (j == 6 && k < n)
                {
                    j = 0;
                    k = init; // 5
                }
            }
            result[i] = score;
        }
    }
    for (int i = 0; i < t; i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}