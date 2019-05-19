int	ft_strcmp(const char *s1, const char *s2);
int ft_putnbr(int n);

int	main(int argc, char **argv)
{
	if (argc > 2)
	{
		ft_putnbr(ft_strcmp(argv[1], argv[2]));
	}
	return (0);
}
