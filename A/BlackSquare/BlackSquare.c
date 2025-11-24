#include <stdio.h>
int main(void)
{
    int a[4];
    for (int i = 0; i < 4; i++)
    {
        scanf("%i", &a[i]);
    }
    char s[100000];
    scanf("%s", &s);

    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        int j = s[i] - '0'; // change char to int
        count += a[j - 1];
    }
    printf("%i", count);
    return 0;
}