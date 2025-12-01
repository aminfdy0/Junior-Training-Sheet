#include <iostream>
using namespace std;
int main(void)
{
    char name[100];
    cin >> name;

    bool letters[26];
    for (int i = 0; i < 26; i++)
    {
        letters[i] = false;
    }

    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        int index = name[i] - 'a';
        if (letters[index] == false)
        {
            letters[index] = true;
            count++;
        }
    }
    if (count % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}