/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 20:12:50 by alefranc          #+#    #+#             */
/*   Updated: 2022/03/25 11:54:08 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	index_of_max(t_list *stack)
{
	size_t	i;
	size_t	max_i;
	int		max_val;
	int		*content;

	max_val = *(int *)stack->content;
	max_i = 0;
	i = 0;
	while (stack != NULL)
	{
		content = stack->content;
		if (*content > max_val)
		{
			max_i = i;
			max_val = *content;
		}
		i++;
		stack = stack->next;
	}
	return (max_i);
}

size_t	index_of_min(t_list *stack)
{
	size_t	i;
	size_t	min_i;
	int		min_val;
	int		*content;

	min_val = *(int *)stack->content;
	min_i = 0;
	i = 0;
	while (stack != NULL)
	{
		content = stack->content;
		if (*content < min_val)
		{
			min_i = i;
			min_val = *content;
		}
		i++;
		stack = stack->next;
	}
	return (min_i);
}

static void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				ft_swap(&tab[j], &tab[j + 1]);
			}
			j++;
		}
		i++;
	}
}
