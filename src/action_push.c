/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 07:22:04 by alefranc          #+#    #+#             */
/*   Updated: 2022/03/17 09:14:33 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_list **stack_from, t_list **stack_to)
{
	t_list	*tmp;

	if (*stack_from != NULL)
	{
		tmp = *stack_from;
		*stack_from = tmp->next;
		tmp->next = NULL;
		ft_lstadd_front(stack_to, tmp);
	}
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	write(1, "pa\n", 3);
	push(stack_b, stack_a);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	write(1, "pb\n", 3);
	push(stack_a, stack_b);
}
