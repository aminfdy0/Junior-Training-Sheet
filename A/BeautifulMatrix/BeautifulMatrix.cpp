#include <iostream>
using namespace std;
int main(void)
{
    int matrix[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int a, b;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matrix[i][j] == 1)
            {
                a = i;
                b = j;
            }
        }
    }
    if(a < 2)
    a = 2 - a;
    else
    a = a - 2;

    if(b < 2)
    b = 2 - b;
    else
    b = b - 2;

    cout << a + b;
}