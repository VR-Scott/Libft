char	**ft_strsplit(char const *s, char c);
void	ft_putstr(char const *s);
void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	if (argc > 2)
	{
		char **sa;

		sa = ft_strsplit(argv[1], argv[2][0]);

		while (*sa)
		{
			ft_putstr(*(sa++));
			ft_putchar('\n');
		}
	}
	return(0);
}
