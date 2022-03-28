/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_push_below_limit.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 12:31:09 by alefranc          #+#    #+#             */
/*   Updated: 2022/03/28 12:12:23 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	select_push(t_list **st_a, t_list **st_b, ssize_t f_i, ssize_t l_i)
{
	int	size;

	size = ft_lstsize(*st_a);
	if (f_i <= size - l_i)
	{
		while (f_i > 0)
		{
			ra(st_a);
			f_i--;
		}
	}
	else
	{
		while (l_i < size)
		{
			rra(st_a);
			l_i++;
		}
	}
	pb(st_a, st_b);
}

int	push_below_limit_b(t_list **stack_a, t_list **stack_b, int limit)
{
	t_list	*a_tmp;
	size_t	i;
	ssize_t	first_i;
	ssize_t	last_i;

	a_tmp = *stack_a;
	i = 0;
	first_i = -1;
	last_i = -1;
	while (a_tmp != NULL)
	{
		if (*(int *)a_tmp->content <= limit && first_i == -1)
			first_i = i;
		if (*(int *)a_tmp->content <= limit)
			last_i = i;
		i++;
		a_tmp = a_tmp->next;
	}
	if (first_i != -1 && last_i != -1)
	{
		select_push(stack_a, stack_b, first_i, last_i);
		return (0);
	}
	return (-1);
}
