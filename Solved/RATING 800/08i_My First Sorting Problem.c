// https://codeforces.com/problemset/problem/1971/A
#include <stdio.h>
unsigned short int main()
{
    unsigned short int t = 0u;
    scanf("%hu", &t);
    unsigned short int result[t][2];
    for (unsigned short int i = 0u; i < t; i++)
    {
        unsigned short int arr[2] = {0u};
        for (unsigned short int j = 0u; j < 2; j++)
        {
            scanf("%hu", &arr[j]);
        }
        for (unsigned short int m = 0u; m < 2; m++)
        {
            unsigned short int minVal = arr[m];
            unsigned short int minValIndex = m;
            for (unsigned short int n = m + 1u; n < 2; n++)
            {
                if (minVal > arr[n])
                {
                    minVal = arr[n];
                    minValIndex = n;
                }
            }
            unsigned short int temp = arr[m];
            arr[m] = minVal;
            arr[minValIndex] = temp;
        }

        for (unsigned short int j = 0u; j < 2; j++)
        {
            if (j == 0)
            {
                result[i][j] = arr[j];
            }
            else if (j == 1)
            {
                result[i][j] = arr[j];
            }
        }
    }
    for (unsigned short int i = 0u; i < t; i++)
    {
        /* code */
        for (unsigned short int j = 0u; j < 2; j++)
        {
            /* code */
            if (j == 0)
            {
                printf("%hu ", result[i][j]);
            }
            else
            {
                printf("%hu\n", result[i][j]);
            }
        }
    }
    return 0;
}