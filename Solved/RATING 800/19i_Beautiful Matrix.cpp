// https://codeforces.com/contest/263/problem/A
#include <iostream>
using namespace std;
int main()
{
    int mat[5][5] = {0};
    int mCount = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> mat[i][j];
        }
    }
    int isFound = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (mat[i][j] == 1)
            {
                isFound = 1;
                if (j == 2 && i == 2)
                {
                    mCount = 0;
                }
                else if (j == 2)
                {
                    if (i > 2)
                    {
                        mCount += (i - 2);
                    }
                    else if (i < 2) // 2-1=1
                    {
                        mCount += (2 - i); // 1,4
                    }
                }
                else if (j > 2)
                {
                    mCount += (j - 2); // 2
                    if (i > 2)
                    {
                        mCount += (i - 2);
                    }
                    else if (i < 2) // 2-1=1
                    {
                        mCount += (2 - i); // 1,4
                    }
                }
                else if (j < 2)
                {
                    mCount += (2 - j);
                    if (i > 2)
                    {
                        mCount += (i - 2);
                    }
                    else if (i < 2)
                    {
                        mCount += (2 - i);
                    }
                }
                break;
            }
        }
        if (isFound == 1)
        {
            break;
        }
    }
    cout << mCount << endl;
    return 0;
}