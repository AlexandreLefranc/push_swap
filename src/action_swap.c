/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 07:23:09 by alefranc          #+#    #+#             */
/*   Updated: 2022/03/17 08:44:38 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_list **stack)
{
	t_list	*tmp;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		tmp = (*stack)->next;
		(*stack)->next = tmp->next;
		tmp->next = NULL;
		ft_lstadd_front(stack, tmp);
	}
}

void	sa(t_list **stack_a)
{
	write(1, "sa\n", 3);
	swap(stack_a);
}

void	sb(t_list **stack_b)
{
	write(1, "sb\n", 3);
	swap(stack_b);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	write(1, "ss\n", 3);
	swap(stack_a);
	swap(stack_b);
}
