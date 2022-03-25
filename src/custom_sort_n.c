/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   custom_sort_n.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 23:24:03 by alefranc          #+#    #+#             */
/*   Updated: 2022/03/24 21:09:09 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	custom_sort_n(t_list **stack_a, t_list **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (size > 5)
	{
		push_min_b(stack_a, stack_b);
		custom_sort_n(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
	else
	{
		custom_sort_5(stack_a, stack_b);
	}
}
