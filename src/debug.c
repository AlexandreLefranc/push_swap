/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:25:27 by alefranc          #+#    #+#             */
/*   Updated: 2022/03/17 06:51:50 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stacks(t_list *stack_a, t_list *stack_b)
{
	int i = 0;
	int	len_a;
	int	len_b;
	int	max_len;
	int	*content_a;
	int	*content_b;

	len_a = ft_lstsize(stack_a);
	len_b = ft_lstsize(stack_b);
	max_len = len_a > len_b ? len_a : len_b;
	while (i < max_len)
	{
		if (max_len - i > len_a)
		i++;
	}
	printf("--------------a --------------b\n");
	printf("===============================\n");
}
