#include "string.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_putnbr(int n);

int	main(int argc, char **argv)
{
	if (argc > 2)
	{
		ft_putnbr(ft_strncmp(argv[1], argv[2],5));
	}
	return (0);
}
