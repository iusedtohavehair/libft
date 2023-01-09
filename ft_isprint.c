int ft_isprint(int ch)
{
    return ((ch >= 32 && ch <= 126));
}

/* #include <stdio.h>
#include <ctype.h>
int main()
{
    char str = 127;
    printf("ft_isalpha: %d\n", ft_isprint(str));
    printf("isalpha: %d\n", isprint(str));
} */