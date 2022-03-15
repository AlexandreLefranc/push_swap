/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:43:39 by alefranc          #+#    #+#             */
/*   Updated: 2022/03/15 17:01:54 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

t_list	*check_and_parse_input(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*node;
	int		*number;
	int		i;

	stack_a = NULL;
	i = 1;
	while (i < argc)
	{
		number = ft_calloc(sizeof(*number), 1);
		*number = ft_atoi(argv[i]);
		node = ft_lstnew(number);
		ft_lstadd_back(&stack_a, node);
		i++;
	}
	while (stack_a != NULL)
	{
		printf("%d\n", *stack_a->content);
		stack_a = stack_a->next;
	}
	return (stack_a);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = check_and_parse_input(argc, argv);
	stack_b = NULL;
	return (0);
}
