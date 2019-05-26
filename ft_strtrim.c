/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 13:00:05 by vscott            #+#    #+#             */
/*   Updated: 2019/05/26 14:24:42 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t l;
	size_t s;
	size_t e;

	if (!s)
		return (NULL);
	l = strlen(s);
	s = 0;
	while (s[s] && (s[s] == ' ' || s[s] == '\n' || s[s] == '\t'))
		s++;
	if (s == l)
		return (ft_strnew(0));
	end = 0;
	while ((s[l - e - 1] == ' ' || s[l - e - 1] == '\n' || s[l - e - 1] == '\t'
				&& l - e - 1 > 0))
		++end;
	return (ft_strsub(s, s, l - e - s));
}
