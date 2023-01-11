#include <stddef.h>
void *ft_memchr(const void *s, int c, size_t n)
{
    char *ptr;

    ptr = (char *)s;

    while (n--)
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
//     char ch[] = " ";
//     char *ptr = ft_memchr(str, ch[0], 3);
//     printf("%s\n", ptr);

//     const char str2[] = "Guy Jodoin";
//     char ch2[] = " ";
//     char *ptr2 = memchr(str2, ch2[0], 3);
//     printf("%s\n", ptr2);
// }
