// https://codeforces.com/problemset/problem/339/A
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i += 2)
    {
        char minVal = s[i];
        int minIndex = i;
        for (int j = i + 2; j < s.length(); j += 2)
        {
            if (s[j] < minVal)
            {
                minVal = s[j];
                minIndex = j;
            }
        }
        char temp = s[i];
        s[i] = s[minIndex];
        s[minIndex] = temp;
    }
    cout << s;
    return 0;
}