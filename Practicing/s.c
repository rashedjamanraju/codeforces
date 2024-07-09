#include <stdio.h>
#include <string.h>
int main()
{
    char n[19];
    int i = 0;
    for (; (n[i] = getchar()) != '\n' && i < 18; i++)
    {
    }
    n[i] = '\0';
    int temp = n[0];
    int l = strlen(n);
    char r[l + 1];
    for (int i = 0; i < strlen(n); i++)
    {
        if (n[i] != '5' && n[i] != '6' && n[i] != '7' && n[i] != '8' && n[i] != '9')
        {
            int dig = (int)n[i] - (int)'0';

            r[i] = (char)((9 - dig) + 48);
        }
    }
    if (r[0] == '0')
    {
        r[0] = temp;
    }
    r[l] = '\0';
    printf("%s\n", r);

    return 0;
}