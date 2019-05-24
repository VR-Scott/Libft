/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tomain.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 16:18:53 by vscott            #+#    #+#             */
/*   Updated: 2019/05/24 16:31:33 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c);
int	ft_toupper(int c);

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		char i = argv[1][0];
		printf("toupper changes %c to %c\n", i, ft_toupper(i));
		i = argv[1][0];
		printf("tolower changes %c to %c\n", i, ft_tolower(i));
	}
}
