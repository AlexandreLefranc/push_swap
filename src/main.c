/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:43:39 by alefranc          #+#    #+#             */
/*   Updated: 2022/03/27 15:58:17 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = parse_input(argc, argv);
	stack_b = NULL;
	// ft_lstprint(stack_a, "=====stack_a=====");
	if (is_sorted(stack_a) == 1)
	{
		ft_lstclear(&stack_a, del_content);
		//dprintf(2, "Already sorted\n");
		return (0);
	}
	if (ft_lstsize(stack_a) == 2)
		custom_sort_2(&stack_a, &stack_b);
	else if (ft_lstsize(stack_a) == 3)
		custom_sort_3(&stack_a, &stack_b);
	else if (ft_lstsize(stack_a) == 4)
		custom_sort_4(&stack_a, &stack_b);
	else if (ft_lstsize(stack_a) == 5)
		custom_sort_5(&stack_a, &stack_b);
	else
		fast_sort(&stack_a, &stack_b, 8);
	ft_lstclear(&stack_a, del_content);
	ft_lstclear(&stack_b, del_content);
	return (0);
}
