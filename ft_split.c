#include <stdio.h>
#include <stdlib.h>
int ft_strslen(char const *s, char c)
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

int word_len(const char *s, int s_index, char c)
{
    int count;
    count = 0;
    while (s[s_index] != c && s[s_index] != '\0')
    {
        count++;
        s_index++;
    }
    return (count + 1);
}

char **ft_split(char const *s, char c)
{
    int words;
    char **array;
    int s_index;
    int array_index;
    int sub_index;

    sub_index = 0;
    words = ft_strslen(s, c);
    array = malloc(sizeof(char *) * (words + 1));
    s_index = 0;
    array_index = 0;
    while (array_index < words)
    {
        array[array_index] = malloc(sizeof(char *) * word_len(s, s_index, c));
        while (s[s_index] != c && s[s_index] != '\0')
        {
            array[array_index][sub_index] = s[s_index];
            s_index++;
            sub_index++;
        }
        s_index++;
        sub_index = 0;
        array_index++;
    }
    return (array);
}

/* int main()
{
    char sep[] = "-";
    char str[] = "Bonjour-Louis";
    char **array = ft_split(str, sep[0]);

    for (size_t i = 0; i < ft_strslen(str, sep[0]) + 1; i++)
        printf("%s\n", array[i]);
} */