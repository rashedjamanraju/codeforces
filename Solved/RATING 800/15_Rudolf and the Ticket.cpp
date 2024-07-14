// https : // codeforces.com/problemset/problem/1941/A
#include <iostream>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    int result[t];
    for (int i = 0; i < t; i++)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int lp[n];
        for (int j = 0; j < n; j++)
        {
            cin >> lp[j];
        }
        int rp[m];
        for (int j = 0; j < m; j++)
        {
            cin >> rp[j];
        }
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            for (int l = 0; l < m; l++)
            {
                if (lp[j] + rp[l] <= k)
                {
                    count++;
                }
            }
        }
        result[i] = count;
    }
    for (int i = 0; i < t; i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}
