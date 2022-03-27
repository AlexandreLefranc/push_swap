/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_push_minmax.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:22:50 by alefranc          #+#    #+#             */
/*   Updated: 2022/03/27 22:13:20 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_max_b(t_list **stack_a, t_list **stack_b)
{
	size_t	size;
	size_t	max_i;

	size = ft_lstsize(*stack_a);
	max_i = index_of_max(*stack_a);
	if ((max_i + 1) > (size / 2 + size % 2))
	{
		while (max_i < size)
		{
			rra(stack_a);
			max_i++;
		}
	}
	else
	{
		while (max_i > 0)
		{
			ra(stack_a);
			max_i--;
		}
	}
	pb(stack_a, stack_b);
}

void	push_max_a(t_list **stack_a, t_list **stack_b)
{
	size_t	size;
	size_t	max_i;

	size = ft_lstsize(*stack_b);
	max_i = index_of_max(*stack_b);
	// printf("max_i=%zu\n", max_i);
	if (max_i > size / 2)
	{
		while (max_i < size)
		{
			rrb(stack_b);
			max_i++;
		}
	}
	else
	{
		while (max_i > 0)
		{
			rb(stack_b);
			max_i--;
		}
	}
	pa(stack_a, stack_b);
}

void	push_min_b(t_list **stack_a, t_list **stack_b)
{
	size_t	size;
	size_t	min_i;

	size = ft_lstsize(*stack_a);
	min_i = index_of_min(*stack_a);
	if ((min_i + 1) > (size / 2 + size % 2))
	{
		while (min_i < size)
		{
			rra(stack_a);
			min_i++;
		}
	}
	else
	{
		while (min_i > 0)
		{
			ra(stack_a);
			min_i--;
		}
	}
	pb(stack_a, stack_b);
}

void	push_min_a(t_list **stack_a, t_list **stack_b)
{
	size_t	size;
	size_t	min_i;

	size = ft_lstsize(*stack_b);
	min_i = index_of_min(*stack_b);
	if ((min_i + 1) > (size / 2 + size % 2))
	{
		while (min_i < size)
		{
			rra(stack_b);
			min_i++;
		}
	}
	else
	{
		while (min_i > 0)
		{
			ra(stack_b);
			min_i--;
		}
	}
	pa(stack_a, stack_b);
}
