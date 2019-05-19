#define FD  1

void	ft_putstr_fd(char const *s, int fd);

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_putstr_fd(argv[1], FD);
	}
	return (0);
}
