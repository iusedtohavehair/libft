int ft_strlen(const char *str)
{
    int length;
    length = 0;

    while (str[length])
        length++;

    return (length);
}

#include <stdlib.h>
#include <stdio.h>
char *ft_strchr(const char *s, int c)
{
    
    int len;
    char *ptr;
    
    len = ft_strlen(s) + 1;
    ptr = (char *)s;

    while (len--)
    {
        if (c == s[len])
        {
            ptr += len; 
            return (ptr);
        }
    }
    return (NULL);
}

/* #include <string.h>
#include <stdio.h>
int main()
{
    const char str[] = "Guy Jodoin";
    char ch[] = "g";
    char *ptr = ft_strchr(str, ch[0]);
    printf("%s\n", ptr);

    const char str2[] = "Guy Jodoin";
    char ch2[] = "g";
    char *ptr2 = strrchr(str2, ch2[0]);
    printf("%s\n", ptr2);
} */
