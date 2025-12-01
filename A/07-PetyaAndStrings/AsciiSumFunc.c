#include <stdio.h>

char *ft_ascii_sum(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        i++;
    }
    return str;
}

int main(void)
{
    char name[] = "aslkAAlkasdd";
    //char username[] = "asdlkjdajwi";
    printf("%s\n", ft_ascii_sum(name));
    return 0;
}