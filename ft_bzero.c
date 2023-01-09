#include <stddef.h>

void ft_bzero(void *s, size_t n)
{
    unsigned char *ptr;

    ptr = (unsigned char *)s;
    while (n--)
        *ptr++ = '\0';
}
/*
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char str[] = "Bonjour";
    char str2[] = "Bonjour";
    ft_bzero(str, 10);
    bzero(str2, 10);
    printf("FT: %i\n", str[0]);
    printf("OG: %i\n", str2[0]);
} */