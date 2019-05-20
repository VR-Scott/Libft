#include "string.h"

int	ft_strcmp(const char *s1, const char *s2);
int	ft_strequ(char const *s1, char const *s2);
void	ft_putnbr(int n);
void	ft_putchar(char c); 

int	main(int argc, char **argv)
{
	if (argc > 2)
	{
		ft_putnbr(ft_strcmp(argv[1], argv[2]));
		ft_putchar('\n');
		ft_putnbr(ft_strequ(argv[1], argv[2]));
	}
	return (0);
}
