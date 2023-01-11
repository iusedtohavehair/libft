int ft_strlen(const char *str)
{
    int length;
    length = 0;

    while (str[length])
        length++;

    return (length);
}

#include <stdlib.h>
#include <stdio.h>
char *ft_strchr(const char *s, int c)
{
    
    int len;
    char *ptr;
    
    len = ft_strlen(s);
    ptr = (char *)s;

    while (len--)
    {
        if (c == *ptr)
            return (ptr);
        ptr++;
    }
    return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
//     const char str[] = "Guy Jodoin";
//     char ch[] = "u";
//     char *ptr = ft_strchr(str, ch[0]);
//     printf("%s\n", ptr);

//     // const char str2[] = "Bonjour carl michaud";
//     // char ch2[] = "p";
//     // char *ptr2 = strchr(str2, ch2[0]);
//     // printf("%s\n", ptr2);
// }
