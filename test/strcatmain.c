char 	*ft_strcat(char *s1, const char *s2);
void	ft_putstr(char *s);
int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		char dst[15];
		dst  = "Hello";
		ft_putstr(ft_strcat(dst, argv[1]));
	}
	return (0);
}
