#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int	main(int argc, char **argv)
{
	if (argc > 3) 
	{
		printf("%s is the Lib's first occurance of %s in %s\n", strstr(argv[1], argv[2]), argv[2], argv[1]);
		printf("%s is the My first occurance of %s in %s\n", ft_strstr(argv[1], argv[2]), argv[2], argv[1]);
		printf("%s is the Lib's first occurance of %s in %i chars of %s\n", strnstr(argv[1], argv[2], atoi(argv[3])), argv[2], atoi(argv[3]), argv[1]);
		printf("%s is the My first occurance of %s in %i chars of %s\n", ft_strnstr(argv[1], argv[2], atoi(argv[3])), argv[2], atoi(argv[3]), argv[1]);
	}
	return (0);
}
