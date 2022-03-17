/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:43:39 by alefranc          #+#    #+#             */
/*   Updated: 2022/03/17 09:17:48 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = parse_input(argc, argv);
	stack_b = NULL;
	printf("%d\n\n", ft_lstsize(stack_a));
	ft_lstprint(stack_a, "=====stack_a=====");
	sa(&stack_a);
	ft_lstprint(stack_a, "=====stack_a=====");
	rrr(&stack_a, &stack_b);
	ft_lstprint(stack_a, "=====stack_a=====");
	rr(&stack_a, &stack_b);
	ft_lstprint(stack_a, "=====stack_a=====");
	pb(&stack_a, &stack_b);
	ft_lstprint(stack_a, "=====stack_a=====");
	ft_lstprint(stack_b, "=====stack_b=====");
	pb(&stack_a, &stack_b);
	ft_lstprint(stack_a, "=====stack_a=====");
	ft_lstprint(stack_b, "=====stack_b=====");
	pa(&stack_a, &stack_b);
	ft_lstprint(stack_a, "=====stack_a=====");
	ft_lstprint(stack_b, "=====stack_b=====");
	pa(&stack_a, &stack_b);
	ft_lstprint(stack_a, "=====stack_a=====");
	ft_lstprint(stack_b, "=====stack_b=====");
	return (0);
}
