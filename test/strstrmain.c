#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strstr(const char *haystack, const char *needle);

int	main(int argc, char **argv)
{
	if (argc > 2) 
	{
		printf("%s is the Lib's first occurance of %s in %s\n", strstr(argv[1], argv[2]), argv[2], argv[1]);
		printf("%s is the My first occurance of %s in %s\n", ft_strstr(argv[1], argv[2]), argv[2], argv[1]);
	}
	return (0);
}
