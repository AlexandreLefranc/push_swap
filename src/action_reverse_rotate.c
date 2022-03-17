/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_reverse_rotate.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 07:23:38 by alefranc          #+#    #+#             */
/*   Updated: 2022/03/17 08:57:20 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_list **stack)
{
	t_list	*last;
	t_list	*prev_last;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		last = ft_lstlast(*stack);
		prev_last = ft_lstprevlast(*stack);
		prev_last->next = NULL;
		ft_lstadd_front(stack, last);
	}
}

void	rra(t_list **stack_a)
{
	write(1, "rra\n", 4);
	reverse_rotate(stack_a);
}

void	rrb(t_list **stack_b)
{
	write(1, "rrb\n", 4);
	reverse_rotate(stack_b);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	write(1, "rrr\n", 4);
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
}
