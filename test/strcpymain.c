char	*ft_strcpy(char *dst, const char *src);
void	ft_strclr(char *s);
void	ft_putstr(char *s);

int		main(void)
{
	char src[] = "Hello World";
	char dst[] = "RANDOM GARBAGE THINGS";

	ft_strclr(dst);
	ft_strcpy(dst, src);
	ft_putstr(dst);
	return (0);
}
