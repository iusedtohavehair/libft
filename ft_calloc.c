#include <stdlib.h>
void ft_bzero(void *s, size_t n)
{
    unsigned char *ptr;

    ptr = (unsigned char *)s;
    while (n--)
        *ptr++ = '\0';
}

void *ft_calloc(size_t count, size_t size)
{
    void *malloc_array;
    void *modifiable;

    malloc_array = malloc(count * size);
    modifiable = malloc_array;

    ft_bzero(modifiable, count);
    return (modifiable);
}

/* #include <stdio.h>
int main()
{
    char *mich = ft_calloc(10, sizeof(char *));
    for (size_t i = 0; i < 10; i++)
    {
        printf("%i\n", mich[i]);
    }

    printf("%s\n", mich);
}
 */