/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 11:38:32 by vscott            #+#    #+#             */
/*   Updated: 2019/05/20 12:09:18 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	return (strncmp(s1, s2, n) ? 0 : 1);
}
