/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 11:59:29 by vscott            #+#    #+#             */
/*   Updated: 2019/05/28 13:41:37 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned long *ld;
	unsigned long *ls;
	unsigned char *cd;
	unsigned char *cs;

	if (dest == NULL && src == NULL)
		return (NULL);
	ld = (unsigned long*)dest;
	ls = (unsigned long*)src;
	while (n >= sizeof(unsigned long))
	{
		*(ld++) = *(ls++);
		n -= sizeof(unsigned long);
	}
	cd = (unsigned char*)ld;
	cs = (unsigned char*)ls;
	while (n--)
		*(cd++) = *(cs++);
	return (dest);
}
