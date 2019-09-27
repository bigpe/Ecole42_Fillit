/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 20:34:31 by lrorscha          #+#    #+#             */
/*   Updated: 2019/05/27 20:36:59 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *lst;

	if (alst == NULL || del == NULL)
		return ;
	while (*alst)
	{
		lst = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = lst;
	}
	*alst = NULL;
}
