#include <stdlib.h>
int ft_strlen(const char *str, int start, int end)
{
	int length;
	int index;

	index = 0;
	length = end + start;

	while (str[start++] && start < length)
		index++;

	return (index);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	int length_to_copy; 
	int index;
	char *ptr; 

	index = 0;
	length_to_copy = ft_strlen(s, start, len);
	ptr = malloc(sizeof(char *) * length_to_copy);

	if (!ptr)
		return (NULL);

	while (length_to_copy--)
	{
		ptr[index++] = s[start++];
	}
	return(ptr);
}
/* 
#include <stdio.h>
int main()
{
	char s1[] = "Micou Baba";
	char *s2 = ft_substr(s1, 3, 45);
	printf("%s\n", s2);
} */