/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 06:42:21 by alefranc          #+#    #+#             */
/*   Updated: 2022/03/28 12:14:11 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list *stack)
{
	int	*content1;
	int	*content2;

	if (stack == NULL || stack->next == NULL)
		return (1);
	while (stack->next != NULL)
	{
		content1 = stack->content;
		content2 = stack->next->content;
		if (*content1 > *content2)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	del_content(void *content)
{
	free(content);
}
