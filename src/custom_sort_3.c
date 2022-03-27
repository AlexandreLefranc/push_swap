/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   custom_sort_3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 11:59:53 by alefranc          #+#    #+#             */
/*   Updated: 2022/03/25 08:58:18 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	custom_sort_3(t_list **stack_a, t_list **stack_b)
{
	size_t	max_i;

	(void)stack_b;
	max_i = index_of_max(*stack_a);
	if (max_i == 0)
		ra(stack_a);
	else if (max_i == 1)
		rra(stack_a);
	if (*(int *)(*stack_a)->content > *(int *)(*stack_a)->next->content)
		sa(stack_a);
}
