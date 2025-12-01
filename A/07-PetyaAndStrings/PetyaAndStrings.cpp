#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char text1[101];
    char text2[101];
    cin >> text1;
    cin >> text2;

    int i = 0;
    while (text1[i] != '\0')
    {
        char txt1 = tolower(text1[i]);
        char txt2 = tolower(text2[i]);

        if (txt1 > txt2)
        {
            cout << 1;
            return 0;
        }
        else if (txt1 < txt2)
        {
        cout << -1;
        return 0;
        }
        i++;
    }
    cout << 0;
    return 0;
}