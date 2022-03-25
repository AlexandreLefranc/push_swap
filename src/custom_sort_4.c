/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   custom_sort_4.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:20:44 by alefranc          #+#    #+#             */
/*   Updated: 2022/03/24 21:30:17 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	custom_sort_4(t_list **stack_a, t_list **stack_b)
{
	push_min_b(stack_a, stack_b);
	custom_sort_3(stack_a, stack_b);
	pa(stack_a, stack_b);
}
