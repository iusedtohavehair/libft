int ft_strlen(char *str)
{
    int length;

    length = 0;

    while (str[length])
        length++;

    return (length);
}

/* #include <stdio.h>
int main()
{
    char str[] = "Bonjour";
    printf("Length: %d\n", ft_strlen(str));
} */