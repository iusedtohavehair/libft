#include <stddef.h>
void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *dest_ptr;
    unsigned char *src_ptr;
    unsigned int index;

    index = 0;
    src_ptr = (unsigned char *)src;
    dest_ptr = (unsigned char *)dst;
    if (dst < src)
    { 
        while (index++ < (unsigned int)len)
            dest_ptr[index] = src_ptr[index];
    }
    else if (dst > src)
    {
        index = len;
        while (index--)
            dest_ptr[index] = src_ptr[index];
    }
    return (dst);
}

/* #include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    //char src[] = "Papa";
    char dest1[] = "Popasd";
    char dest2[] = "Popasd";
    char src1[] = "asd";
    char src2[] = "asd";

    ft_memmove(dest1, src1, 2);
    memcpy(dest2, src2, 2);
    printf("FT: %s\n", dest1);
    printf("OG: %s\n", dest2);
}  */