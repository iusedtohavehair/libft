int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        c+= 32;
    return (c);
}

/* #include <ctype.h>
#include <stdio.h>
int main()
{
    char test[] = "BON2OUR";
    int index = 0;
    while (test[index])
    {
        test[index] = ft_tolower(test[index]);
        index++;
    }
    printf("%s\n", test);
} */

