#include <stdio.h>
int main(void)
{
    int n;
    scanf("%i", &n);

    int Petya, Vasya, Tonya;
    int result = 0;
    int i = 0;
    while (i < n)
    {
        scanf("%i %i %i",&Petya, &Vasya, &Tonya);

        // if ( (Petya == 1 && Vasya == 1) ||
        //      (Petya == 1 && Tonya == 1) ||
        //      (Vasya == 1 && Tonya == 1) )
        if (Petya + Vasya + Tonya >= 2)
            result++;
            
        i++;
    }
    printf("%i", result);
    return 0;
}