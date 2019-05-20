#include "string.h"
#define EN 5 

int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_strnequ(char const *s1, char const *s2, size_t n);
void	ft_putnbr(int n);
void	ft_putchar(char c); 

int	main(int argc, char **argv)
{
	if (argc > 2)
	{
		ft_putnbr(ft_strncmp(argv[1], argv[2], EN));
		ft_putchar('\n');
		ft_putnbr(ft_strnequ(argv[1], argv[2], EN));
	}
	return (0);
}
