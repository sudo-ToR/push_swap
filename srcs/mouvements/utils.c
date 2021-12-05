/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tor <tor@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:03:06 by marvin            #+#    #+#             */
/*   Updated: 2021/12/05 12:11:51 by tor              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		last_in_table(t_int_table *to_parse)
{
	return (to_parse->table[to_parse->len - 1]);
}

void	up_one(t_int_table *to_sort)
{
	int	i;

	i = 1;
	while (i < to_sort->len)
	{
		to_sort->table[i - 1] = to_sort->table[i];
		i++;
	}
}

void	down_one(t_int_table *to_sort)
{
	int	i;

	i = to_sort->len - 1;
	if (!i)
		return;
	while (i)
	{
		to_sort->table[i] = to_sort->table[i - 1];
		i--;
	}
}