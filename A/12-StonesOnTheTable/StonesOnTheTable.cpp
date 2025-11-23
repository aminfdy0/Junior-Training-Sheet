#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    char s[n];
    cin >> s;
    
    int changes = 0;
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == s[i+1])
        {
            changes++;
        }
        i++;
    }
    cout << changes;
}