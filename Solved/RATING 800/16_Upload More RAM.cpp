// https://codeforces.com/contest/1987/problem/A
#include <iostream>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    int result[t];
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        result[i] = (a * b) - (b - 1);
    }
    for (int i = 0; i < t; i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}