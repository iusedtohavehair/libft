#include <stddef.h>
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *dest_ptr;
    unsigned char *src_ptr;
    src_ptr = (unsigned char *)src;
    dest_ptr = (unsigned char *)dest;
    while (n--)
        *dest_ptr++ = *src_ptr++;
    return (dest);
}
/*
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char src[] = "Papa";
    char dest1[] = "Bonjour";
    char dest2[] = "Bonjour";
    ft_memcpy(dest1, src, 1);
    memcpy(dest2, src, 1);
    printf("FT: %s\n", dest1);
    printf("OG: %s\n", dest2);
} */