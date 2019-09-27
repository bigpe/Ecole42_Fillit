/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 19:22:23 by lrorscha          #+#    #+#             */
/*   Updated: 2019/05/27 19:29:50 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new_list;

	new_list = (struct s_list*)ft_memalloc(sizeof(t_list));
	if (new_list == NULL)
		return (NULL);
	if (content == NULL)
	{
		new_list->content = NULL;
		new_list->content_size = 0;
	}
	else
	{
		new_list->content = ft_memalloc(sizeof(content) * content_size);
		if (new_list->content == NULL)
		{
			free(new_list);
			return (NULL);
		}
		ft_memcpy((new_list->content), content, sizeof(content) * content_size);
		new_list->content_size = content_size;
	}
	new_list->next = NULL;
	return (new_list);
}
