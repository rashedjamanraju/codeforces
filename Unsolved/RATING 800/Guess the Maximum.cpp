// https://codeforces.com/problemset/problem/1979/A
// Run time error
#include <iostream>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    int result[t];
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int list[n];
        for (int j = 0; j < n; j++)
        {
            cin >> list[j];
        }
        int a = (n * (n - 1)) / 2; // 6
        int range[a][2];
        int max[a];

        // 01 02 03, 12 13, 23
        for (int k = 0, r = 0; k < n && r < a; k++)
        {
            for (int l = k + 1; l < n && r < a; l++, r++)
            {
                range[r][0] = k;
                range[r][1] = l;
            }
        }

        int sI = 0, eI = 0;
        for (int j = 0; j < a; j++) // 1
        {
            for (int k = 0; k < 2; k++) // 10 11
            {
                if (k == 0)
                {
                    sI = range[j][k]; // 0
                }
                else if (k == 1)
                {
                    eI = range[j][k] + 1; // 3
                }
            }
            int maxVal = -1;

            for (int l = sI; l < eI; l++) // 02
            {
                if (maxVal < list[l])
                {
                    maxVal = list[l];
                }
            }

            max[j] = maxVal;
        }
        int minVal = max[0];
        for (int k = 1; k < a; k++)
        {
            if (max[k] < minVal)
            {
                minVal = max[k];
            }
        }
        result[i] = minVal - 1;
    }
    for (int i = 0; i < t; i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}