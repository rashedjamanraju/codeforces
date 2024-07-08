// https://codeforces.com/contest/1980/problem/B
#include <stdio.h>
unsigned short int main()
{

    unsigned short int t = 0u;
    scanf("%hu", &t);
    unsigned short int result[t];
    unsigned short int nfkArr[t][3];

    unsigned short int l = 0u;
    for (unsigned short int j = 0u; j < t; j++)
    {

        for (; l < 3; l++)
        {
            scanf("%hu", &nfkArr[j][l]);
        }
        if (l == 3)
        {
            unsigned short int n = nfkArr[j][0];
            unsigned short int f = nfkArr[j][1];
            unsigned short int k = nfkArr[j][2];
            unsigned short int numbers[n];
            unsigned short int favNumber = 0;

            for (unsigned short int a = 0u; a < n; a++)
            {
                scanf("%hu", &numbers[a]);
                if (a == (f - 1))
                {
                    favNumber = numbers[a];
                }
            }
            for (unsigned short int c = 0u; c < n; c++)
            {
                unsigned short int maxVal = numbers[c];
                unsigned short int maxValIndex = c;
                for (unsigned short int d = c + 1; d < n; d++)
                {
                    if (numbers[d] > maxVal)
                    {
                        maxVal = numbers[d];
                        maxValIndex = d;
                    }
                }
                unsigned short int temp = numbers[c];
                numbers[c] = maxVal;
                numbers[maxValIndex] = temp;
            }
            unsigned short int count = 0u;
            for (unsigned short int i = 0; i < n; i++)
            {
                if (numbers[i] == favNumber)
                {
                    count++;
                }
            }
            signed short int favNumberIndex[count];
            for (unsigned short int i = 0, k = 0; i < n && k < count; i++)
            {
                if (numbers[i] == favNumber)
                {
                    favNumberIndex[k] = i;
                    k++;
                }
            }
            unsigned short int lastCount = 0;
            unsigned short int minusOne = 0;
            for (unsigned short int i = 0; i < count; i++)
            {
                if (favNumberIndex[i] < k)
                {
                    favNumberIndex[i] = -1;
                }
                else if (favNumberIndex[i] >= k)
                {
                    lastCount++;
                }
            }
            for (unsigned short int i = 0; i < count; i++)
            {
                if (favNumberIndex[i] == -1)
                {
                    minusOne++;
                    break;
                }
            }
            if (minusOne == 1 && lastCount > 0)
            {
                result[j] = 3;
            }
            if (minusOne == 1 && lastCount == 0)
            {
                result[j] = 1;
            }
            if (minusOne == 0 && lastCount > 0)
            {
                result[j] = 0;
            }
        }
        l = 0;
    }

    for (unsigned short int i = 0; i < t; i++)
    {
        if (result[i] == 0)
        {
            printf("NO\n");
        }
        else if (result[i] == 1)
        {
            printf("YES\n");
        }
        else if (result[i] == 3)
        {
            printf("MAYBE\n");
        }
    }
    return 0;
}