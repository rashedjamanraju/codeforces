// https://codeforces.com/problemset/problem/304/A
#include <stdio.h>
#include <stdbool.h>
#define MX 200000000
bool Squar[MX];
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        Squar[i * i] = 1;
    }

    int cnt = 0;
    for (int a = 1; a <= n; a++)
    {
        for (int b = a; b <= n; b++)
        {
            int v = (a * a) + (b * b);
            if (Squar[v])
            {
                cnt++;
            }
        }
    }

    printf("%d", cnt);
}