// https://codeforces.com/problemset/problem/1984/A
#include <iostream>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    char status[t];
    string result[t];
    for (int i = 0; i < t; i++)
    {
        int n = 0;
        cin >> n;
        int numbers[n];
        for (int j = 0; j < n; j++)
        {
            cin >> numbers[j];
        }
        if (numbers[n - 1] == numbers[0])
        {
            status[i] = 'N';
        }
        else
        {
            string temp;
            if (numbers[0] - numbers[0] != numbers[n - 1] - numbers[1])
            {
                status[i] = 'Y';
                for (int j = 0; j < n; j++)
                {
                    if (j == 0)
                    {
                        temp += 'R';
                    }
                    else
                    {
                        temp += 'B';
                    }
                }
                result[i] = temp;
            }
            else if (numbers[0] - numbers[0] == numbers[n - 1] - numbers[1])
            {
                int k = 0;
                while (k <= n - 2)
                {
                    if (numbers[k] - numbers[0] == numbers[n - 1] - numbers[k + 1])
                    {
                        k++;
                    }
                    else if (numbers[k] - numbers[0] != numbers[n - 1] - numbers[k + 1])
                    {
                        status[i] = 'Y';
                        for (int j = 0; j < n; j++)
                        {
                            if (j >= 0 && j <= k)
                            {
                                temp += 'R';
                            }
                            else
                            {
                                temp += 'B';
                            }
                        }
                        result[i] = temp;
                        break;
                    }
                }
            }
        }
    }
    for (int i = 0; i < t; i++)
    {
        if (status[i] != 'Y')
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
            cout << result[i] << endl;
        }
    }

    return 0;
}