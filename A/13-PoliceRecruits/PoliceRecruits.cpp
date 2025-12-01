#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    int event[n];
    for (int i = 0; i < n; i++)
    {
        cin >> event[i];
    }
    int count = 0;
    int policeman = 0;
    for (int j = 0; j < n; j++)
    {
        if (event[j] == -1)
        {
            if (policeman > 0)
                policeman--;
            else
                count++;
        }
        else if (event[j] > 0)
            policeman += event[j];
    }
    cout << count;
    return 0;
}