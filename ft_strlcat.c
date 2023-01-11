#include <stddef.h>

int ft_strlen(char *str)
{
    int length;

    length = 0;

    while (str[length])
        length++;

    return (length);
}

size_t  ft_strlcat(char *dst, const char *src, size_t size) 
{
    int index;
    int len;

    len = ft_strlen(dst);
    index = len;

    while (size--)
    {
        /* code */
    }
    




    return(size);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
//     // char src[] = "asd";
//     // char dst[] = "Puisse manger michaud";

//     char src2[] = "age";
//     char dst2[25] = "Pu";

//     //ft_strlcat(dst, src, 3);
//     strlcat(dst2, src2, 3);

//     //printf("%s\n", dst);
//     printf("%s\n", dst2);
// }
