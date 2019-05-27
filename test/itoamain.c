#include <stdio.h>

char	*ft_itoa(int n);
void	ft_putstr(char *s);
int		ft_atoi(const char *str);

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("%i is ft_atoi(argv[1])\n", ft_atoi(argv[1]));
		printf( "%s is ft_itoa(ft_atoi(argv[1])\n", ft_itoa(ft_atoi(argv[1])));
	}
	return (0);
}
