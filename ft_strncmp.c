
#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;
	unsigned int n_int;

	n_int = (unsigned int)n;
	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n_int)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	a[] = "bon";
	char	b[] = "bonjaur";
	printf("%d", ft_strncmp(b, a, 5));
} */