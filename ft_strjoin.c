#include <stdlib.h>

int ft_strlen(const char *str)
{
    int length;

    length = 0;

    while (str[length])
        length++;

    return (length);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	int len;
	int index;
	int concat_index;
	char *concat; 

	index = 0;
	concat_index = 0;
	len  = ft_strlen(s1) + ft_strlen(s2) + 1;
	concat = malloc(sizeof(char *) * len);
	if (!concat)
		return (NULL);
	while (s1[index])
		concat[concat_index++] = s1[index++];
	index = 0;
	while (s2[index])
		concat[concat_index++] = s2[index++];
	concat[concat_index] = '\0';
	return(concat);
}

#include <stdio.h>
int main()
{
	char s1[] = "Coucou ";
	char s2[] = "Guy Jodoin";
	char *s3 = ft_strjoin(s1, s2);
	printf("%s \n", s3);
}