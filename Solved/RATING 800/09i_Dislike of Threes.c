// https://codeforces.com/contest/1560/problem/A
#include <stdio.h>
int main()
{
    unsigned short int t = 0u;
    scanf("%hu", &t);
    unsigned short int inputs[t];
    for (unsigned short int i = 0u; i < t; i++)
    {
        scanf("%hu", &inputs[i]);
    }
    unsigned short int result[t];
    unsigned short int count = 0u;
    for (unsigned short int i = 0u; i < t; i++)
    {
        unsigned short int count = 0;
        for (unsigned short int j = 1u; count <= inputs[i]; j++)
        {
            if (j % 3 == 0 || j % 10 == 3)
            {
                continue;
            }
            else
            {
                count++;
                if (count == inputs[i])
                {
                    result[i] = j;
                    break;
                }
            }
        }
    }
    for (unsigned short int i = 0u; i < t; i++)
    {
        printf("%hu\n", result[i]);
    }
    return 0;
}