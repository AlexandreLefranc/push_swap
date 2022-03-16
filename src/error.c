/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:12:54 by alefranc          #+#    #+#             */
/*   Updated: 2022/03/16 16:17:10 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	msg_exit(char *msg, int exit_code)
{
	write(2, msg, ft_strlen(msg));
	exit(exit_code);
}
