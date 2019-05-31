/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:46:17 by vscott            #+#    #+#             */
/*   Updated: 2019/05/31 12:02:55 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
		if (lst && f)
		{
			t_list *fresh;

			if (!(fresh = (t_list*)malloc(sizeof(t_list))))
				return (NULL);
			fresh = f(lst);
			fresh->next = ft_lstmap(lst->next, f);
			return (fresh);
		}
		return (NULL);
}
