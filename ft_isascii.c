int ft_isascii(int ch)
{
    return (ch >= 0 && ch <= 127);
}

/* #include <stdio.h>
#include <ctype.h>
int main()
{
    char str[] = "Bonjour¡";
    printf("ft_isalpha: %d\n", ft_isascii(str[8]));
    printf("isalpha: %d\n", isascii(str[8]));
} */