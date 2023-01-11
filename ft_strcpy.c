char *ft_strcpy(char *dst, char *src)
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

/* #include <string.h>
#include <stdio.h>
int main()
{
    char src[] = "asd   ";
    char dst[] = "Puisse";

    char src2[] = "asd   ";
    char dst2[] = "Puisse manger michaud";

    strcpy(dst, src);
    ft_strcpy(dst2, src2);

    printf("%s\n", dst);
    printf("%s\n", dst2);
} */