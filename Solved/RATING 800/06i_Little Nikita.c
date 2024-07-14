// https://codeforces.com/contest/1977/problem/A
#include <stdio.h>
int main()
{
    int t = 0;
    scanf("%d", &t);
    int result[t];
    for (int i = 0; i < t; i++)
    {
        int n = 0;
        int m = 0;
        scanf("%d", &n);
        scanf("%d", &m);
        if (n == m)
        {
            result[i] = 1;
        }
        else if (n != m)
        {
            if (n > m) // 98>88
            {
                int diff = n - m; // 10
                int mm = m;
                if (diff % 2 == 0)
                {
                    int a = diff / 2; // 5
                    for (int i = 1; i <= a; i++)
                    {
                        mm--;
                    }
                    for (int i = 1; i <= a; i++)
                    {
                        mm++;
                    }
                    if (mm == m)
                    {
                        result[i] = 1;
                    }
                    else if (mm != m)
                    {
                        result[i] = 0;
                    }
                }

                else if (diff % 2 != 0)
                {
                    int a = diff / 2;
                    int b = diff - a;
                    for (int i = 1; i <= a; i++)
                    {
                        mm--;
                    }
                    for (int i = 1; i <= b; i++)
                    {
                        mm++;
                    }
                    if (mm == m)
                    {
                        result[i] = 1;
                    }
                    else if (mm != m)
                    {
                        result[i] = 0;
                    }
                }
            }
            else if (m > n)
            {
                result[i] = 0;
            }
        }
    }
    for (int i = 0; i < t; i++)
    {
        if (result[i] == 0)
        {
            printf("No\n");
        }
        else if (result[i] == 1)
        {
            printf("Yes\n");
        }
    }
    return 0;
}