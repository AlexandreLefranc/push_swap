/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:43:39 by alefranc          #+#    #+#             */
/*   Updated: 2022/03/28 11:42:19 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = parse_input(argc, argv);
	stack_b = NULL;
	if (is_sorted(stack_a) == 1)
	{
		ft_lstclear(&stack_a, del_content);
		return (0);
	}
	if (ft_lstsize(stack_a) == 2)
		custom_sort_2(&stack_a, &stack_b);
	else if (ft_lstsize(stack_a) == 3)
		custom_sort_3(&stack_a, &stack_b);
	else if (ft_lstsize(stack_a) <= 10)
		custom_sort_n(&stack_a, &stack_b);
	else if (ft_lstsize(stack_a) <= 20)
		fast_sort(&stack_a, &stack_b, 2);
	else if (ft_lstsize(stack_a) <= 100)
		fast_sort(&stack_a, &stack_b, 5);
	else
		fast_sort(&stack_a, &stack_b, 10);
	ft_lstclear(&stack_a, del_content);
	ft_lstclear(&stack_b, del_content);
	return (0);
}
