// https://codeforces.com/contest/1985/problem/B
#include <stdio.h>
int main()
{
    unsigned short int t = 0;
    scanf("%hu", &t); // t=3  0-2
    for (int i = 0; i < t; i++)
    {
        unsigned short int k = 0;
        scanf("%hu", &k);
        if (k == 3)
        {
            printf("%hu\n", 3);
        }
        else
        {
            printf("%hu\n", 2);
        }
    }
    return 0;
}