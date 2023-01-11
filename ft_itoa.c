#include <stdlib.h>
int nbr_len(int n)
{
    int minus;
    int len;

    len = 0;
    minus = 0;
    if (n < 0)
    {
        minus = 1;
        n *= -1;
    }
    if (n <= 9)
        return (1 + minus);
    else
    {
        while (n >= 1)
        {
            n /= 10;
            len++;
        }
    }
    return (len + minus);
}

char *print_min()
{
    char *str;
    int index;
    int n = 2147483647;

    str = malloc(sizeof(char *) * 11);
    index = 10;

    while (index >= 1)
    {
        str[index--] = (n % 10) + 48;
        n /= 10;
    }
    str[0] = '-';
    str[10] = '8';
    str[11] = '\0';
    return (str);
}
char *ft_itoa(int n)
{
    int len;
    int minus;
    int index;
    char *str;

    minus = 0;
    len = nbr_len(n) + 1;
    if (n == -2147483648)
        return (print_min());
    if (n < 0)
    {
        minus = 1;
        n *= -1;
    }
    index = len - 2;
    str = malloc(sizeof(char *) * len);
    while (index >= minus)
    {
        str[index--] = (n % 10) + 48;
        n /= 10;
    }
    if (minus)
        str[0] = '-';
    return (str);
}

#include <limits.h>
#include <stdio.h>
int main()
{
    char *str = ft_itoa(-945097);
    printf("%s\n", str);
}