/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 10:47:13 by vscott            #+#    #+#             */
/*   Updated: 2019/05/26 10:50:41 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strdel(char **as)
{
	ft_memdel((void**)as);
}
