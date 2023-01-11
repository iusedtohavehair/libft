int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	new_int;

	new_int = 0;
	i = 0;
	minus = 1;
	while (str[i] == 32)
		i++;
    if (str[i] == 45)
    {
		minus = -1;
		i++;
    }

	while (str[i] >= 48 && str[i] <= 58)
	{
		new_int = new_int * 10 + str[i] - 48;
		i++;
	}
	return (new_int * minus);
}


#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char test[] = "    305";
	int michou = ft_atoi(test);
	int michou2 = atoi(test);
	printf("%d \n", michou);
	printf("%d \n", michou2);
} 