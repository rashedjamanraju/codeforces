// https://codeforces.com/contest/1772/problem/A
#include <stdio.h>
int main()
{
    int t = 0;
    scanf("%d", &t);
    int res[t];
    for (int i = 0; i < t; i++)
    {
        int a, b;
        char c;
        scanf("%d%c%d", &a, &c, &b);
        res[i] = a + b;
    }
    for (int i = 0; i < t; i++)
    {
        printf("%d\n", res[i]);
    }
    return 0;
}