/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fast_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:40:08 by alefranc          #+#    #+#             */
/*   Updated: 2022/03/28 12:11:17 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*convert_stack_to_tab(t_list *stack_a)
{
	int		*tab_tmp;
	int		i;
	size_t	size;

	size = ft_lstsize(stack_a);
	tab_tmp = ft_calloc(sizeof(*tab_tmp), ft_lstsize(stack_a));
	if (tab_tmp == NULL)
		msg_exit("ft_calloc() failed in convert_stack_to_tab", 1);
	i = 0;
	while (stack_a != NULL)
	{
		tab_tmp[i] = *(int *)stack_a->content;
		i++;
		stack_a = stack_a->next;
	}
	ft_sort_int_tab(tab_tmp, size);
	return (tab_tmp);
}

static int	*get_quantiles(t_list **stack_a, int nchunks)
{
	int		*tab_quantiles;
	int		*tab_tmp;
	int		chunk_size;
	int		i;
	int		j;

	tab_quantiles = ft_calloc(sizeof(*tab_quantiles), nchunks);
	if (tab_quantiles == NULL)
		msg_exit("ft_calloc() failed in get_quantiles", 1);
	tab_tmp = convert_stack_to_tab(*stack_a);
	chunk_size = ft_lstsize(*stack_a) / nchunks;
	j = 0;
	while (nchunks > 1)
	{
		i = 0;
		while (i < chunk_size)
		{
			i++;
		}
		tab_quantiles[j] = tab_tmp[i + j * chunk_size];
		nchunks--;
		j++;
	}
	free(tab_tmp);
	return (tab_quantiles);
}

static void	part1(t_list **stack_a, t_list **stack_b, int *tab_quantiles, int n)
{
	int	i;

	i = 0;
	while (i < n - 1)
	{
		while (push_below_limit_b(stack_a, stack_b, tab_quantiles[i]) == 0)
			;
		i++;
	}
	custom_sort_n(stack_a, stack_b);
}

static void	part2(t_list **stack_a, t_list **stack_b)
{
	while (*stack_b != NULL)
	{
		push_max_a(stack_a, stack_b);
	}
}

void	fast_sort(t_list **stack_a, t_list **stack_b, int nchunks)
{
	size_t	size;
	int		*tab_quantiles;

	size = ft_lstsize(*stack_a);
	tab_quantiles = get_quantiles(stack_a, nchunks);
	part1(stack_a, stack_b, tab_quantiles, nchunks);
	part2(stack_a, stack_b);
	free(tab_quantiles);
}
