#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len);
void	ft_strclr(char *s);
void	ft_putstr(char *s);

int		main(void)
{
	char src[] = "Hello World";
	char dst[] = "RANDOM GARBAGE THINGS";

	ft_strclr(dst);
	ft_strncpy(dst, src, 7);
	ft_putstr(dst);
	return (0);
}
