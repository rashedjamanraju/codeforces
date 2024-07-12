#include <iostream>
#include <string>
using namespace std;
int main()
{
    string number;
    cin >> number;
    if (number.length() <= 19)
    {
        for (int i = 0; i < number.length(); i++)
        {
            if (number[i] == '5' || number[i] == '6' || number[i] == '7' || number[i] == '8' || number[i] == '9')
            {
                if (i == 0 && number[i] == '9')
                {
                    continue;
                }
                else
                {
                    int dig = (int)number[i] - (int)'0';
                    char rev = (char)((9 - dig) + (int)'0');
                    number[i] = rev;
                }
            }
        }
        cout << number << endl;
    }
    return 0;
}