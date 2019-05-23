#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str);

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("lib atoi gives %i from %s\n", atoi(argv[1]), argv[1]); 
		printf("My atoi gives %i from %s\n", ft_atoi(argv[1]), argv[1]); 
	}
	return (0);
}
