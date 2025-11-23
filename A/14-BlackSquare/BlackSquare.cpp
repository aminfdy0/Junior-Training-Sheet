#include <iostream>
using namespace std;
int main(void)
{
    int a[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    char s[100000];
    cin >> s;

    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '1')
        {
            count += a[0];
        }
        else if (s[i] == '2')
        {
            count += a[1];
        }
        else if (s[i] == '3')
        {
            count += a[2];
        }
        else if (s[i] == '4')
        {
            count += a[3];
        }
    }
    cout << count;
    return 0;
}