#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c);
int	ft_isalnum(int c);
int	ft_isdigit(int c);

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("isalpha returns : %i from : %c\n", isalpha(argv[1][0]), argv[1][0]); 
		printf("ft_isalpha returns : %i from : %c\n", ft_isalpha(argv[1][0]), argv[1][0]); 
		printf("isalnum returns : %i from : %c\n", isalnum(argv[1][0]), argv[1][0]); 
		printf("ft_isalnum returns : %i from : %c\n", ft_isalnum(argv[1][0]), argv[1][0]); 
		printf("isdigit returns : %i from : %c\n", isdigit(argv[1][0]), argv[1][0]); 
		printf("ft_isdigit returns : %i from : %c\n", ft_isdigit(argv[1][0]), argv[1][0]); 
	}
	return (0);
}
