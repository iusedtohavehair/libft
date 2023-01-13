#include <stddef.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int length;

    length = 0;

    while (str[length])
        length++;

    return (length);
}

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    int index;
    int src_index;
    int len;
    int max;

    len = ft_strlen(dst);
    index = len;
    src_index = 0;
    max = size - len;

    if (max <= 0)
        return (ft_strlen(dst) + 1);

    while (--max && src[src_index] != '\0')
    {
        dst[index] = src[src_index];
        index++;
        src_index++;
    }
    dst[index] = '\0';

    return (size);
}

#include <string.h>
int main()
{
    char src[] = " craque";
    char dst[] = "Puage de";

    char src2[] = " craque";
    char dst2[30] = "Puage de";

    int flen = ft_strlcat(dst, src, 7);
    int slen = strlcat(dst2, src2, 7);

    printf("%s, %d\n", dst, flen);
    printf("%s, %d\n", dst2, slen);
}
