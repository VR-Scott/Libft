
#include <stdlib.h>
#include <stdio.h>

void	ft_putnbr(int n);

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("printf says argv is %i\n", (atoi(argv[1])));
		ft_putnbr(atoi(argv[1]));
	}
	return (0);
}
