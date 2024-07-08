// https://codeforces.com/contest/1955/problem/A
#include <stdio.h>
int main()
{
    unsigned short int t = 0u;
    scanf("%hu", &t);
    unsigned short int result[t];
    for (int i = 0; i < t; i++)
    {
        unsigned short int n, a, b;
        scanf("%hu %hu %hu", &n, &a, &b);
        int r1 = n * a;
        int r2 = ((n / 2) * b) + ((n % 2) * a);
        if (r1 == r2)
        {
            result[i] = r1;
        }
        else if (r1 < r2)
        {
            result[i] = r1;
        }
        else if (r1 > r2)
        {
            result[i] = r2;
        }
    }
    for (int i = 0; i < t; i++)
    {
        printf("%hu\n", result[i]);
    }

    return 0;
}