// https://codeforces.com/problemset/problem/1981/A
// TL ERROR
#include <stdio.h>
int main()
{
    int t = 0;
    scanf("%d", &t);
    int result[t];
    for (int i = 0; i < t; i++)
    {
        int lr[2] = {0};
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &lr[j]);
        }

        int arrR[((lr[1] - lr[0]) + 1)];
        for (int j = 0, i = lr[0]; i <= lr[1] && j < ((lr[1] - lr[0]) + 1); i++, j++)
        {
            arrR[j] = i;
        }

        int p = 2;
        int x = 0;
        int tempResult[(lr[1] - lr[0]) + 1];

        int score = 0;
        for (int i = 0; (i < ((lr[1] - lr[0]) + 1)) && p == 2; i++)
        {
            x = arrR[i];
            while (p >= 2 && p <= lr[1])
            {

                if (x % p == 0)
                {
                    x = (x / p);
                    score++;
                    if (x == 1)
                    {
                        tempResult[i] = score;
                        break;
                    }
                }
                else
                {
                    p++;
                }
            }
            p = 2;
            score = 0;
        }
        for (int c = 0u; c < ((lr[1] - lr[0]) + 1); c++)
        {
            int maxVal = tempResult[c];
            int maxValIndex = c;
            for (int d = c + 1; d < ((lr[1] - lr[0]) + 1); d++)
            {
                if (tempResult[d] > maxVal)
                {
                    maxVal = tempResult[d];
                    maxValIndex = d;
                }
            }
            int temp = tempResult[c];
            tempResult[c] = maxVal;
            tempResult[maxValIndex] = temp;
        }
        result[i] = tempResult[0];
    }

    for (int i = 0; i < t; i++)
    {
        printf("%d\n", result[i]);
    }

    return 0;
}
