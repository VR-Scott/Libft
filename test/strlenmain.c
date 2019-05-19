/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlenmain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 08:22:44 by vscott            #+#    #+#             */
/*   Updated: 2019/05/19 09:45:33 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strlen(const char *str);

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("strlen is %ld \n", ft_strlen(argv[1]));
	}
	return (0);
}
