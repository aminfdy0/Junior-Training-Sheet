#include <stdio.h>
int main(void)
{
    int matrix[5][5];
    int i = 0;
    while (i < 5)
    {
        int j = 0;
            while (j < 5)
            {
                scanf("%i", &matrix[i][j]);
                j++;
            }
        i++;
    }
    int a, b;
    i = 0;
    while (i < 5)
    {
        int j = 0;
            while (j < 5)
            {
                if (matrix[i][j] == 1)
                {
                    a = i;
                    b = j;
                }
                j++;
            }
        i++;
    }

    if (a > 3)
    a = a - 2;
    else 
    a = 2 - a;

    if(b > 4)
    b = b - 2;
    else
    b = 2 - b;
    
    printf("%i", a + b);
    return 0;
}