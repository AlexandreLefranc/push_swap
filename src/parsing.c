/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:26:07 by alefranc          #+#    #+#             */
/*   Updated: 2022/03/17 06:41:11 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_uniqueness(t_list *stack, t_list *node)
{
	while (stack != NULL)
	{
		if (*(int *)(stack->content) == *(int *)(node->content))
		{
			//ft_lstclear(*stack_a);
			//ft_lstdel_one(node);
			msg_exit("Error2\n", 1);
		}
		stack = stack->next;
	}
}

static void	check_number_only(char *str)
{
	if (ft_isnumber(str) == 0)
	{
		//ft_lstclear();
		msg_exit("Error! NUmber", 1);
	}
}

static void	parse_arg(char *argument, t_list **stack_a)
{
	t_list	*node;
	int		*number;
	char	**tab;
	int		i;

	tab = ft_split(argument, ' ');
	if (tab == NULL)
		return ;
	i = 0;
	while (tab[i] != NULL)
	{
		check_number_only(tab[i]);
		number = ft_calloc(sizeof(*number), 1);
		*number = ft_atoi(tab[i]);
		node = ft_lstnew((int *)number);
		if (node == NULL)
			msg_exit("ft_lstnew() failed", 1);
		check_uniqueness(*stack_a, node);
		ft_lstadd_back(stack_a, node);
		i++;
	}
	ft_strtabfree(tab);
}

t_list	*parse_input(int argc, char **argv)
{
	t_list	*stack_a;
	int		i;

	stack_a = NULL;
	i = 1;
	while (i < argc)
	{
		parse_arg(argv[i], &stack_a);
		i++;
	}
	return (stack_a);
}
