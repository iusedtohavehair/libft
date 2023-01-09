int ft_isalpha(int ch)
{
    return ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'));
}

int ft_isdigit(int ch)
{
    return ((ch >= '0' && ch <= '9'));
}

// checks if ch is alpha or is num.
int ft_isalnum(int ch)
{
    return (ft_isalpha(ch) || ft_isdigit(ch));
}

/*
#include <stdio.h>
#include <ctype.h>
int main()
{
    char str = '$';
    printf("ft_isalpha: %d\n", ft_isalnum(str));
    printf("isalpha: %d\n", isalnum(str));
} */