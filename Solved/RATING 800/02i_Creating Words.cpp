// https://codeforces.com/contest/1985/problem/A
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    cin.ignore();
    string names[t];
    for (int i = 0; i < t; i++)
    {
        string name;
        getline(cin, name);
        if (name.length() == 7)
        {
            char temp = name[0];
            name[0] = name[4];
            name[4] = temp;
            names[i] = name;
        }
    }
    for (int i = 0; i < t; i++)
    {
        cout << names[i] << endl;
    }
    return 0;
}