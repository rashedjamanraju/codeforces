// https://codeforces.com/contest/1989/problem/A
#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int x[n], y[n];
    int result[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
        if (y[i] >= -1)
        {
            result[i] = 1;
        }
        else
        {
            result[i] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (result[i] == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}