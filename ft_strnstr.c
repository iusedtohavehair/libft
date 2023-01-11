#include <stddef.h>
#include <stdio.h>

char *ft_strnstr(const char *s, const char *c, size_t len){
    
    char *ptr;
    
    ptr = (char *)s;

    while (*ptr != '\0' && len--)
    {
        if (*c == *ptr)
            return (ptr);
        ptr++;
    }
    return ((char *)s);
}
/* 
#include <string.h>
#include <stdio.h>
int main()
{
    const char str[] = "Guy Jodoin";
    char ch[] = "";
    char *ptr = ft_strnstr(str, ch, 12);
    printf("%s\n", ptr);

    const char str2[] = "Guy Jodoin";
    char ch2[] = "";
    char *ptr2 = strnstr(str2, ch2, 12);
    printf("%s\n", ptr2);
} */