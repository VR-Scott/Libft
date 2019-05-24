#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c);

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("isaplha returns :%i from :%c\n",  isalpha(argv[1][0]), argv[1][0]);
		printf("ft_isaplha returns :%i from :%c\n",  ft_isalpha(argv[1][0]), argv[1][0]);
	}
	return (0);
}
