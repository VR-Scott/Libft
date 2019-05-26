/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 11:59:29 by vscott            #+#    #+#             */
/*   Updated: 2019/05/25 15:53:47 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	long *ld;
	long *ls;
	char *cd;
	char *cs;

	ld = (long*)dest;
	ls = (long*)src;
	while (n >= sizeof(long))
	{
		*(ld++) = *(ls++);
		n -= sizeof(long);
	}
	cd = (char*)ld;
	cs = (char*)ls;
	while (n--)
		*(cd++) = *(cs++);
	return (dest);
}
