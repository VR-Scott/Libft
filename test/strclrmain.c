void	ft_strclr(char *s);
void	ft_putchar(char c);

int	main(void)
{
	char s[] = "Hello World";
	int i = 0;
	
	ft_strclr(s);
	while (i < 10)
	{
		ft_putchar(s[i]);
		i++;
	}
	return (0);
}
