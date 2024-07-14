// https://codeforces.com/contest/4/problem/A
#include <stdio.h>
int main()
{
    unsigned short int w = 0u;
    scanf("%hu", &w);
    if (w == 1 || w == 2)
    {
        printf("NO\n");
    }
    else if (w > 2)
    {
        unsigned short int arr[2] = {0};
        arr[0] = 2;
        arr[1] = w - 2;
        unsigned short int count = 0;
        if (arr[1] % 2 != 0)
        {
            printf("NO\n");
        }
        else
        {
            printf("yes\n");
        }
    }
    return 0;
}