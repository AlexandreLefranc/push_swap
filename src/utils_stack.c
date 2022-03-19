/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 20:12:50 by alefranc          #+#    #+#             */
/*   Updated: 2022/03/18 22:59:20 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	index_of_max(t_list *stack)
{
	size_t	i;
	size_t	max_i;
	long	max_val;
	long	*content;

	max_val = *(long *)stack->content;
	max_i = 0;
	i = 0;
	while (stack != NULL)
	{
		content = stack->content;
		if (*content > max_val)
		{
			max_i = i;
			max_val = *content;
		}
		i++;
		stack = stack->next;
	}
	return (max_i);
}

size_t	index_of_min(t_list *stack)
{
	size_t	i;
	size_t	min_i;
	long	min_val;
	long	*content;

	min_val = *(long *)stack->content;
	min_i = 2147483647 + 2147483648;
	i = 0;
	while (stack != NULL)
	{
		content = stack->content;
		if (*content < min_val)
		{
			min_i = i;
			min_val = *content;
		}
		i++;
		stack = stack->next;
	}
	return (min_i);
}
