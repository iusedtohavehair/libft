int ft_isalpha(int ch)
{
    return ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'));
}
/*
#include <stdio.h>
#include <ctype.h>
int main()
{
    char str = '2';
    printf("ft_isalpha: %d\n", ft_isalpha(str));
    printf("isalpha: %d\n", isalpha(str));
} */