/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 20:24:13 by lrorscha          #+#    #+#             */
/*   Updated: 2019/05/27 20:27:46 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(f)(t_list *elem))
{
	t_list	*nlst;
	t_list	*clst;

	nlst = f(lst);
	if (lst == NULL || f == NULL)
		return (NULL);
	clst = nlst;
	while (lst->next)
	{
		lst = lst->next;
		clst->next = f(lst);
		if (clst->next == NULL)
			return (NULL);
		clst = clst->next;
	}
	return (nlst);
}
