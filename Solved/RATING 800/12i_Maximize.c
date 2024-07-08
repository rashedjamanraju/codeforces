// https://codeforces.com/contest/1968/problem/A
// https://codeforces.com/problemset/problem/1968/A
#include <stdio.h>
unsigned short int gcd(unsigned short int a, unsigned short int b);
int main()
{
    unsigned short int t = 0u;
    scanf("%hu", &t);
    unsigned short int result[t];

    for (unsigned short int i = 0u; i < t; i++)
    {
        unsigned short int a;
        scanf("%hu", &a);
        for (unsigned short int b = 1u; b < a; b++)
        {
            // unsigned short int g = gcd(a, b) + b;
            if ((gcd(a, b) + b) == a)
            {
                result[i] = b;
                break;
            }
        }
    }
    for (unsigned short int i = 0u; i < t; i++)
    {
        printf("%hu\n", result[i]);
    }
    return 0;
}

unsigned short int gcd(unsigned short int a, unsigned short int b)
{
    while (a % b != 0)
    {
        unsigned short int k = a % b;
        a = b;
        b = k;
    }
    if (a % b == 0)
    {
        return b;
    }
}