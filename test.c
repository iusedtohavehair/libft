#include "libft.h"
#include <stdio.h>

int strslen(char const *s, char c)
{
    int index;
    int words;

    index = 0;
    words = 1;

    if (s[0] == '\0')
        return (0);
    while (s[index] != '\0')
    {
        if (s[index] == c)
            words++;
        index++;
    }
    return (words);
}

void test_atoi(char *nb)
{
    int michou = ft_atoi(nb);
    int michou2 = atoi(nb);
    printf("%d \n", michou);
    printf("%d \n", michou2);
}

void test_split()
{
    char sep[] = "-";
    char str[] = "Bonjour-Louis";
    char **array = ft_split(str, sep[0]);

    for (int i = 0; i < strslen(str, sep[0]) + 1; i++)
        printf("%s\n", array[i]);
}

int main()
{
    // test_atoi("305");
    test_split();
}