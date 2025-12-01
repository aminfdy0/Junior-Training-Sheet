#include <stdio.h>

void ft_uppercase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
    printf("%s", str);
}

void ft_lowercase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    printf("%s", str);
}

int main(void)
{
    char word[100];
    scanf("%s", &word);

    int uppercase = 0, lowercase = 0; 
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
            lowercase++;
        if (word[i] >= 'A' && word[i] <= 'Z')
            uppercase++;
    }

    if (lowercase >= uppercase)
        ft_lowercase(word);
    else
        ft_uppercase(word);
}