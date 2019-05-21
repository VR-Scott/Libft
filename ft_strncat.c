/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:18:28 by vscott            #+#    #+#             */
/*   Updated: 2019/05/21 15:47:32 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*src;
	char	*dst;

	dst = s1;
	src = (char *)s2;
	while (*dst)
		dst++;
	while (*src && n > 0)
	{
		*dst = *src;
		dst++;
		src++;
		n--;
	}
	*dst = '\0';
	return (s1);
}
