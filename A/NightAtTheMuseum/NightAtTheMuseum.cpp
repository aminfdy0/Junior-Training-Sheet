#include <iostream>
using namespace std;
int main(void)
{
    char word[100];
    cin >> word;
    int start = 97; // 'a' in ascii is 97
    int steps = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        int result = abs(word[i] - start);
            if (result <= 13)
                steps += result;
            else
                steps += (26 - result);
        start = word[i];
    }
    cout << steps;
    return 0;
}