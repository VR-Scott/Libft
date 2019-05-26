/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 10:37:25 by vscott            #+#    #+#             */
/*   Updated: 2019/05/26 15:04:17 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnew(size_t size)
{
	char *fresh;

	if(!(fresh = (char*)ft_memalloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_bzero((void*)fresh, size + 1);
	return (fresh);
}
