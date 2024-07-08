// https://codeforces.com/contest/1986/problem/A
#include <stdio.h>
#include <math.h>
unsigned short int main()
{
    unsigned short int t = 0u; // i=t
    scanf("%hu", &t);
    unsigned short int result[t];

    for (unsigned short int i = 0u; i < t; i++)
    {
        unsigned short int coordinates[3] = {0u};
        for (unsigned short int j = 0u; j < 3; j++)
        {
            scanf("%hu", &coordinates[j]);
        }

        for (unsigned short int k = 0u; k < 3; k++)
        {
            unsigned short int maxVal = coordinates[k];
            unsigned short int maxValIndex = k;
            for (unsigned short int j = i + 1; j < 3; j++)
            {
                if (maxVal < coordinates[j])
                {
                    maxVal = coordinates[j];
                    maxValIndex = j;
                }
            }
            unsigned short int temp = coordinates[k];
            coordinates[k] = maxVal;
            coordinates[maxValIndex] = temp;
        }
        unsigned short int some[3] = {0u};
        for (unsigned short int l = 0u; l < 3; l++)
        {
            unsigned short int sum = 0u;
            for (unsigned short int j = 0; j < 3; j++)
            {
                signed short int e = coordinates[j] - coordinates[l];
                if (e < 0)
                {
                    e *= (-1);
                }
                sum += e;
            }
            some[l] = sum;
        }
        for (unsigned short int m = 0u; m < 3; m++)
        {
            unsigned short int minVal = some[m];
            unsigned short int minValIndex = m;
            for (unsigned short int j = m + 1; j < 3; j++)
            {
                if (minVal > some[j])
                {
                    minVal = some[j];
                    minValIndex = j;
                }
            }
            unsigned short int temp = some[m];
            some[m] = minVal;
            some[minValIndex] = temp;
        }
        result[i] = some[0];
    }
    for (unsigned short int i = 0u; i < t; i++)
    {
        printf("%hu\n", result[i]);
    }
    return 0;
}