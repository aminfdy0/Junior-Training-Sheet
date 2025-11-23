#include <stdio.h>
int main(void)
{
    int n = 0;
    scanf("%d", &n);

    char s[n];
     scanf(" %s", &s);

    int anton = 0, danik = 0;
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == 'A' || s[i] == 'a')
            anton++;
        else if (s[i] == 'D' || s[i] == 'd')
            danik++;
        i++;
    }

    if (anton > danik)
        printf("Anton");
    else if (danik > anton)
        printf("Danik");
    else
       printf("Friendship");
}