#define FD  1

void	ft_putendl_fd(char const *s, int fd);

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_putendl_fd(argv[1], FD);
	}
	return (0);
}
