/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comparison.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tor <tor@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 14:02:03 by tor               #+#    #+#             */
/*   Updated: 2021/09/13 14:42:48 by tor              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_bigger(int first, int next)
{
	if (next > first)
		return (1);
	return (0);
}

int	is_bigger_than_med(int to_compare, int med)
{
	if (to_compare > med)
		return (1);
	return (0);
}

int	is_ascending(t_int_table *to_check)
{
	int	i;

	i = 0;
	while (i < to_check->len - 1)
	{
		if (to_check->table[i] < to_check->table[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	is_descending(t_int_table *to_check)
{
	int	i;

	i = 0;
	while (i < to_check->len - 1)
	{
		if (to_check->table[i] > to_check->table[i + 1])
			return (0);
		i++;
	}
	return (1);
}
