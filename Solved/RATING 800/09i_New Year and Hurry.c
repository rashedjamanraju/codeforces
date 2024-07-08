// https://codeforces.com/contest/750/problem/A
#include <stdio.h>
unsigned short int main()
{
    unsigned short int n = 0u, k = 0u;
    scanf("%hu %hu", &n, &k);
    unsigned short int count = 0u;
    unsigned short int sum = 0u;
    for (unsigned short int i = 1u; i <= n; i++)
    {
        sum += (5 * i);
        if (sum <= (240 - k))
        {
            count++;
        }
        else if (sum > (240 - k))
        {
            break;
        }
    }
    printf("%hu\n", count);
    return 0;
}