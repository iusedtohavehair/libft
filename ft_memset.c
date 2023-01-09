#include <stddef.h>

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr;

    ptr = (unsigned char *)s;
    while (n--)
        *ptr++ = (unsigned char)c;
    return (s);
}
/*
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char ch = '$';
    char str[] = "Bonjour";
    char str2[] = "Bonjour";
    ft_memset(str, ch, 5);
    memset(str2, ch, 5);

    printf("FT: %s\n", str);
    printf("OG: %s\n", str2);
} */