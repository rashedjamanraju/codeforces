#include <iostream>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    int result[t];
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        int stat[n];
        for (int j = 0; j < n; j++)
        {
            cin >> stat[j];
        }
        if (n == 1)
        {
            result[i] = stat[0];
        }
        else
        {
            result[i] = k - n;
        }
    }
    for (int i = 0; i < t; i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}