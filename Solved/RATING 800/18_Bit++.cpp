// https://codeforces.com/contest/282/problem/A
#include <iostream>
using namespace std;
int main()
{
    int x = 0;
    int t;
    cin >> t;
    int res = 0;
    for (int i = 0; i < t; i++)
    {
        string in;
        cin >> in;
        if (in == "X++" || in == "++X")
        {
            x++;
        }
        else if (in == "X--" || in == "--X")
        {
            x--;
        }
    }
    res = x;
    cout << res << endl;
    return 0;
}