/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:16:23 by alefranc          #+#    #+#             */
/*   Updated: 2022/03/28 14:46:48 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "libft.h"

// action_push_below_limit.c
int		push_below_limit_b(t_list **stack_a, t_list **stack_b, int limit);

// action_push_minmax.c
void	push_max_b(t_list **stack_a, t_list **stack_b);
void	push_max_a(t_list **stack_a, t_list **stack_b);
void	push_min_b(t_list **stack_a, t_list **stack_b);
void	push_min_a(t_list **stack_a, t_list **stack_b);

// action_push.c
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);

// action_reverse_rotate.c
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);

// action_rotate.c
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);

// action_swap.c
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);

// custom_sort
void	custom_sort_2(t_list **stack_a, t_list **stack_b);
void	custom_sort_3(t_list **stack_a, t_list **stack_b);
void	custom_sort_4(t_list **stack_a, t_list **stack_b);
void	custom_sort_5(t_list **stack_a, t_list **stack_b);
void	custom_sort_n(t_list **stack_a, t_list **stack_b);

// parsing.c
t_list	*parse_input(int argc, char **argv);

// error.c
void	msg_exit(char *msg, int exit_code);
void	msg_free_exit(char *msg, t_list **stack, int exit_code);

// fast_sort.c
void	fast_sort(t_list **stack_a, t_list **stack_b, int nchunks);

// utils_lst.c
int		is_sorted(t_list *stack);
void	del_content(void *content);

// utils_stack.c
size_t	index_of_max(t_list *stack);
size_t	index_of_min(t_list *stack);
void	ft_sort_int_tab(int *tab, int size);

#endif
