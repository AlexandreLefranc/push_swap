/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:26:07 by alefranc          #+#    #+#             */
/*   Updated: 2022/03/28 14:43:08 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_isinteger(char *str)
{
	int	is_neg;
	int	cmp1;
	int	cmp2;

	is_neg = 0;
	if (str[0] == '-')
	{
		str++;
		is_neg = 1;
	}
	if (ft_strlen(str) > 10)
		return (0);
	else if (ft_strlen(str) < 10)
		return (1);
	else
	{
		cmp1 = ft_strncmp(str, "2147483647", 10);
		cmp2 = ft_strncmp(str, "2147483648", 10);
		if (cmp1 > 0 && is_neg == 0)
			return (0);
		else if (cmp2 > 0 && is_neg == 1)
			return (0);
		else
			return (1);
	}
}

static void	check_uniqueness(t_list **stack, t_list *node, char **tab)
{
	t_list	*stack_tmp;

	stack_tmp = *stack;
	while (stack_tmp != NULL)
	{
		if (*(int *)(stack_tmp->content) == *(int *)(node->content))
		{
			ft_lstclear(stack, del_content);
			ft_lstdelone(node, del_content);
			ft_strtabfree(tab);
			msg_exit("Error\n", 1);
		}
		stack_tmp = stack_tmp->next;
	}
}

static void	check_number(char *str, t_list **stack_a, char **tab)
{
	if (ft_isnumber(str) == 0)
	{
		ft_lstclear(stack_a, del_content);
		ft_strtabfree(tab);
		msg_exit("Error\n", 1);
	}
	if (ft_isinteger(str) == 0)
	{
		ft_lstclear(stack_a, del_content);
		ft_strtabfree(tab);
		msg_exit("Error\n", 1);
	}
}

static void	parse_arg(char *argument, t_list **stack_a)
{
	t_list	*node;
	int		*number;
	char	**tab;
	size_t	i;

	tab = ft_split(argument, ' ');
	if (tab == NULL)
		msg_free_exit("ft_split() failed", stack_a, 1);
	i = 0;
	while (tab[i] != NULL)
	{
		check_number(tab[i], stack_a, tab);
		number = ft_calloc(sizeof(*number), 1);
		if (number == NULL)
			msg_free_exit("ft_calloc() failed", stack_a, 1);
		*number = ft_atoi(tab[i]);
		node = ft_lstnew(number);
		if (node == NULL)
			msg_free_exit("ft_lstnew() failed", stack_a, 1);
		check_uniqueness(stack_a, node, tab);
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
