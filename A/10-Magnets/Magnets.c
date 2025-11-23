#include <stdio.h>
int main(void)
{
    int n;
    scanf("%i", &n);

    int magnets[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%i",&magnets[i]);
    }

    int changes = 0;
    for (int i = 0; i < n; i++)
    {
        if (magnets[i] != magnets[i + 1])
        {
            changes++;
        }
    }
    printf("%i", changes);
    return 0;
}