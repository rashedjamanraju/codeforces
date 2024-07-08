// https://codeforces.com/problemset/problem/1980/A
#include <stdio.h>
int main()
{
    int t = 0;
    scanf("%d", &t);
    int result[t];
    for (int i = 0; i < t; i++)
    {
        int nm[2] = {0};
        int n = 0;
        int m = 0;
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &nm[j]);
            if (j == 0)
            {
                n = nm[j];
            }
            else
            {
                m = nm[j];
            }
        }

        char qb[n + 1];
        for (int k = 0; (qb[k] = getchar()) != '\n' && qb[k] != ' ' && k < n; k++)
        {
        }
        qb[n] = '\0';

        int d = n / m;
        char char7[7] = {'A',
                         'B',
                         'C',
                         'D',
                         'E',
                         'F',
                         'G'};
        int count = 0;
        int f = 0;
        if (d == n)
        {
            for (int i = 0; i < 7; i++)
            {
                f = 0;
                for (int j = 0; j < n; j++)
                {
                    if (qb[j] == char7[i])
                    {
                        f = 1;
                        break;
                    }
                }
                if (f == 0)
                {
                    count++;
                }
            }
        }
        else if (d != n)
        {
            int tempArr[m];
            for (int i = 0, j = m; i < m && j <= n; i++, j += 3)
            {
                tempArr[i] = j;
            }
            // int k = 0;
            for (int i = 0; i < m; i++)
            {

                for (int j = 0; j < 7; j++)
                {
                    f = 0;
                    for (int k = tempArr[i] - 3; k < tempArr[i]; k++)
                    {

                        if (k >= 0 && k < n && qb[k] == char7[j])
                        {
                            f = 1;
                            break;
                        }
                    }
                    if (f == 0)
                    {
                        count++;
                    }
                }
            }
        }
        result[i] = count;
    }

    for (int i = 0; i < t; i++)
    {
        printf("%d\n", result[i]);
    }
    return 0;
}