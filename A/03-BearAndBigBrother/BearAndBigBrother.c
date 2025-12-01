#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%i %i",&a ,&b);

    int i = 0;
    while (b >= a)
    {
        a = a * 3;
        b = b * 2;
        i++;
    }
    printf("%d",i);
    return 0;
}