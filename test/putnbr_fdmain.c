
#include <stdlib.h>
#include <stdio.h>

#define FD 1

void	ft_putnbr_fd(int n, int fd);

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("printf says argv is %i\n", (atoi(argv[1])));
		ft_putnbr_fd(atoi(argv[1]), FD);
	}
	return (0);
}
