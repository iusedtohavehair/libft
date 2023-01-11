#include <stdlib.h>
int ft_strlen(char *str)
{
    int length;

    length = 0;

    while (str[length])
        length++;

    return (length);
}

char *ft_tolower(unsigned int i, char c)
{
    char *ch;
    ch = malloc(sizeof(char *) * 2);
    ch[0] = c;
    if (i)
        return (ch);

    return (ch);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int len;
    unsigned int index;
    char *modified;

    index = 0;
    len = ft_strlen((char *)s);
    modified = malloc(sizeof(char *) * (len + 1));
    if (!modified)
        return (NULL);

    while (s[index] != '\0')
    {
        modified[index] = (*f)(index, s[index]);
        index++;
    }
    return (modified);
}

int main()
{
    char str[] = "Bonjour";
    char str_2 = ft_strmapi(str, (*)ft_tolower);
}
// #include <stdio.h>
// void printNumber(int nbr)
// {
//     printf("%d\n", nbr);
// }
// void myFunction(void (*f)(int))
// {
//     for(int i = 0; i < 5; i++)
//     {
//         (*f)(i);
//     }
// }
// int main(void)
// {
//     myFunction(printNumber);
//     return (0);
// }