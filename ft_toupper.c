int ft_tolower(int c)
{
    if (c >= 'a' && c <= 'z')
        c -= 32;
    return (c);
}
/*
#include <ctype.h>
#include <stdio.h>
int main()
{
    char test[] = "Bonjour";
    int index = 0;
    while (test[index])
    {
        test[index] = ft_tolower(test[index]);
        index++;
    }
    printf("%s\n", test);
} */
