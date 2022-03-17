/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 06:42:21 by alefranc          #+#    #+#             */
/*   Updated: 2022/03/17 08:19:06 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstprint(t_list *lst, char *msg)
{
	int	*content;

	dprintf(2, "%s\n", msg);
	while (lst != NULL)
	{
		content = lst->content;
		dprintf(2, "content=%d\n", *content);
		lst = lst->next;
	}
	dprintf(2, "\n");
}
