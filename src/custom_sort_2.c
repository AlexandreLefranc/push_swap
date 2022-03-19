/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   custom_sort_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 11:03:28 by alefranc          #+#    #+#             */
/*   Updated: 2022/03/18 22:50:43 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	custom_sort_2(t_list **stack_a, t_list **stack_b)
{
	(void)stack_b;
	sa(stack_a);
	if (is_sorted(*stack_a) == 0)
	{
		write(2, "Error! Not sorted\n", 18);
	}
	//ft_lstprint(stack_a, "=====stack_a=====");
}
