#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);

int	main(int argc, char **argv)
{
	if (argc > 2)
	{
		if (ft_strchr(argv[1], 0) != NULL)
		{
			printf("%s is my 1st occurance of c \n", (ft_strchr(argv[1], 0)));
			printf("%s is lib 1st occurance of c \n", (strchr(argv[1], 0)));
			printf("%s is my lst occurance of c \n", (ft_strrchr(argv[1], 0)));
			printf("%s is lib lst occurance of c \n", (strrchr(argv[1], 0)));

		}
	}
	return (0);
}
