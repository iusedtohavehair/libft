#include <stddef.h>
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
    unsigned int n_int;

    char *ps1;
    char *ps2;

    ps1 = (char *)s1;
    ps2 = (char *)s2;

    n_int = (unsigned int) n;
	i = 0;
	while (i++ < n_int)
	{
		if (ps1[i] != ps2[i])
			return (ps1[i] - ps2[i]);
	}
	return (0);
}

/* #include <stdio.h>
int	main(void)
{
	char	a[] = "bonj";
	char	b[] = "bonjaur";
	printf("%d", ft_memcmp(b, a, 9));
} */