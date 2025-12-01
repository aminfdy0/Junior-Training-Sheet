#include <stdio.h>
int main(void)
{
    int n, h;
    scanf("%i %i", &n, &h);

    int a[n];
    int i = 0;
    while (n > i)
    {
        scanf("%i", &a[i]);
        i++;
    }

    i = 0;
    int result = 0;
    while (n > i)
    {
       if (a[i] > h)
        result = result + 2;
       else
        result = result + 1;
       i++;
    }
    printf("%i", result);

    return 0;
}