/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fast_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:40:08 by alefranc          #+#    #+#             */
/*   Updated: 2022/03/24 20:02:23 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*dummy_sort_list(t_list *stack_a)
{
	int	*tab;
	int	size;

	size = ft_lstsize(stack_a);
	tab = ft_calloc(sizeof(*tab), size);
	while (stack_a != NULL)
	{
		*tab = *(int *)stack_a->content
		stack_a = stack_a->next;
	}

	return (tab);

}

static t_list	get_thresholds(t_list *stack_a, size_t nb_chunks)
{
	t_list	*thresholds;
	size_t	stack_a_size;

	stack_a_size = ft_lstsize(stack_a);

	thresholds = NULL;
	while (nb_chunks > 0)
	{

		nb_chunks--;
	}
	return (thresholds);
}

static size_t	get_number_of_chunks(size_t list_size)
{
	size_t	nb_chunks;

	nb_chunks = list_size / 10
	return (nb_chunks);
}

void	fast_sort(t_list **stack_a, t_list **stack_b)
{

}
