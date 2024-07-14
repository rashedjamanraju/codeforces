// https://codeforces.com/problemset/problem/723/A
#include <iostream>
using namespace std;
int main()
{
    int num[3] = {0};
    for (int i = 0; i < 3; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < 3; i++)
    {
        int minVal = num[i];
        int minIndex = i;
        for (int j = i + 1; j < 3; j++)
        {
            if (minVal > num[j])
            {
                minVal = num[j];
                minIndex = j;
            }
        }
        int temp = num[i];
        num[i] = minVal;
        num[minIndex] = temp;
    }
    int result = (num[1] - num[0]) + (num[2] - num[1]);
    cout << result;
    return 0;
}