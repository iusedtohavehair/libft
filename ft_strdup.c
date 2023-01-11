#include <stdlib.h>
int ft_strlen(const char *str)
{
    int length;

    length = 0;

    while (str[length])
        length++;

    return (length);
}

char *ft_strcpy(char *dst, const char *src)
{
    int index;

    index = 0;

    while (src[index])
    {
        dst[index] = src[index];
        index++;
    }
    dst[index] = src[index];
    return(dst);
}

char    *ft_strdup(const char *s1)
{
    int len;
    char *ptr_malloc;

    len = ft_strlen(s1) + 1;
    ptr_malloc = (char *) malloc(sizeof(char *) * len);
    if (!ptr_malloc)
        return(NULL);
    ft_strcpy(ptr_malloc, s1);
    return(ptr_malloc);
}


// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char *s1 = "Guildor Roy";
//     char *s2 = ft_strdup(s1);
//     char *OGs2 = strdup(s1);

//     printf("%s\n", s2);
//     printf("%s\n", OGs2);

//     free(s2);
// }