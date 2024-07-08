// https://codeforces.com/contest/199/problem/A
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int f0 = 0;
    int f1 = 1;
    int f2 = f0 + f1; 
    int fx1 = 0, fx2 = 0;
    if (n == 0)
    {
        printf("0 0 0\n");
    }
    else if (n == 1)
    {
        printf("0 0 1\n");
    }
    else if (n > 1) 
    {
        while (fx1 != n)
        {
            fx1 = f1 + f2; 
            if (fx1 != n)
            {
                f1 = f2;
                f2 = fx1;
            }
        }
        if (fx1 == n)
        {
            printf("0 %d %d\n", f1, f2);
        }
    }
    return 0;
}