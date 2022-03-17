/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 08:19:31 by alefranc          #+#    #+#             */
/*   Updated: 2022/03/17 09:07:48 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_list **stack)
{
	t_list	*tmp;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		tmp = *stack;
		*stack = tmp->next;
		tmp->next = NULL;
		ft_lstadd_back(stack, tmp);
	}
}

void	ra(t_list **stack_a)
{
	write(1, "ra\n", 3);
	rotate(stack_a);
}

void	rb(t_list **stack_b)
{
	write(1, "rb\n", 3);
	rotate(stack_b);
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	write(1, "rr\n", 3);
	rotate(stack_a);
	rotate(stack_b);
}
